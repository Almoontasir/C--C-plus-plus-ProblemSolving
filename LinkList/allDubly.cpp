#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
 struct node{
    int data;
    Node * next;
};
Node *createNode(int item,Node *next)
{
    Node *new_node =(Node*)malloc(sizeof(Node));
    if(new_node == NULL)
    {
        cout<<"Memory is not avaiable"<<endl;
        exit(1);
    }
    new_node->data=item;
    new_node->next=next;
    return new_node;
}
Node *Remove(Node *node,Node *head)
{
    if(node == head)
    {
        head = node->next;
        free(node);
        return head;
    }
    Node *curren_node = head;
    while(curren_node!=NULL)
    {
        if(curren_node->next==node)
           break;
           curren_node= curren_node->next;
    }
    if(curren_node==NULL)
        return head;
    curren_node->next=node->next;
    free(node);
    return head;
}
Node *prepend(Node *head,int item)
{
    Node *new_node = createNode(item,head);

    return new_node;
}
Node *append(Node *head,int item)
{
    Node *new_node = createNode(item,NULL);
     if(head==NULL)
        return new_node;
     Node *current_node = head;
     while(current_node->next!=NULL)
     {
         current_node=current_node->next;
     }
     current_node->next=new_node;
     return head;
}
void Insert(Node *node,int item)
{
    Node *new_node = createNode(item,node->next);
    node->next=new_node;
}
void print(Node *head)
{
    Node *current_node = head;
    while(current_node!=NULL)
    {
        cout<<current_node->data<<" ";
        current_node= current_node->next;

    }
    cout<<endl;
}
int main()
{
    Node *head;

    head = prepend(NULL,20);
    head = prepend(head,10);
    Node *node =head;
    head=append(head,30);
    Insert(node,15);
    print(head);


    return 0;
}
