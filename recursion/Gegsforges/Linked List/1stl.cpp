#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
  int data;
  Node *next;
};
//Node *createNode(int item,Node *next)
//{
//    Node *new_node = (Node*)malloc(sizeof(Node));
//    if(new_node == NULL)
//    {
//        cout<<"Memory cant allocate"<<endl;
//        exit(1);
//    }
//    new_node->data=item;
//    new_node->next=next;
//    return new_node;
//}
Node *prepend(Node *head,int item)
{
//    Node *new_node = createNode(item,head);
Node *new_node = new Node;
 new_node->data=item;
 new_node->next=head;
    return new_node;
}
Node *previous(Node *head,Node *node)
{
    if(head==NULL)
        return NULL;
    if(head->next==node )
        return head;
   return previous(head->next,node);
}
Node *Remove(Node *head,Node *node,int num)
{
//cout<<num<<endl;
//cout<<node->data<<endl;
  if(num==1)
    {
//        cout<<node->data<<endl;
        if(node == head)
        {
            head = node->next;
            free(node);
            return head;
        }

        Node *prev = previous(head,node);
        if(prev==NULL)
        {
            cout<<"The node is node there"<<endl;
            return head;
        }
        prev->next = node->next;
        free(node);
        return head;
    }
    return Remove(head,node->next,num-1);

}
void print(Node *node)
{
    if(node==NULL)
        return;
    cout<<node->data<<" ";
    print(node->next);
}
void checkPrint(Node *node)
{
    if(node==NULL)
    {
        cout<<"The Linked list is empty"<<endl;
    }

   else
    print(node);
}

int main()
{
    freopen("in.txt","r",stdin);
    int n;
    cin>>n;
    int m;
    cin>>m;
    Node *head = prepend(NULL,m);
    for(int i=1;i<n;i++)
    {
        cin>>m;
         head =prepend(head,m);
    }
    cout<<"Which value u want to delete"<<endl;
    int value;
    cin>>value;
//    cout<<head->data<<endl;
//    head = Remove(head,head,value);
    checkPrint(head);

    return 0;
}

