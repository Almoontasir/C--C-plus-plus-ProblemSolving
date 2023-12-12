#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
int data;
Node *next;
Node *previous;
};
Node *append(Node *head,Node *node)
{
    if(head==NULL)
        return node;
    if(head->next==NULL)
      {
         head->next=node;
         node->previous=head;
       return head;
      }
    append(head->next,node);
   return head;

}
Node *Reverse(Node *head)
{
    Node *new_node = head->next;
    head->next=head->previous;
    head->previous=new_node;
    if(head->previous==NULL)
        return head;
   return Reverse(head->previous);
}
Node *Start_append(Node *head,int item)
{
    Node *new_node = new Node;
    new_node->data = item;
    new_node->next=NULL;
    new_node->previous=NULL;
    head =append(head,new_node);
    return head;
}
void print(Node *head,Node **tail)
{
    if(head->next==NULL)
    {
        cout<<head->data<<endl;
        *tail = head;
        return;
    }

       cout<<head->data<<" ";
       print(head->next,tail);

}
void printBack(Node *tail)
{
    if(tail!=NULL)
    {
        cout<<tail->data<<" ";
        printBack(tail->previous);
    }
}

int main()
{
    Node *head = NULL;

        head = Start_append(head,20);
        Node *n = head;
        head = Start_append(head,22);
        head = Start_append(head,25);
        head = Start_append(head,26);
        Node *tail = NULL;
        head = Reverse(head);
        print(head,&tail);
//        printBack(tail);
    return 0;
}

