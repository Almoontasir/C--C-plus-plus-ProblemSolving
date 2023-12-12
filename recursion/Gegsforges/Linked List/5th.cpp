#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
int data;
Node *next;
};
Node *append(Node *head,Node *node)
{
    if(head==NULL)
        return node;

  head->next= append(head->next,node);
    return head;

}
Node *Start_append(Node *head,int item)
{
    Node *new_node = new Node;
    new_node->data = item;
    new_node->next=NULL;
    head =append(head,new_node);
    return head;
}
void print(Node *head,int n)
{
   if(head!=NULL)
   {
       if(n & 1)
       cout<<head->data<<" ";
       print(head->next,n+1);
   }
}
int main()
{
    Node *head = NULL;

        head = Start_append(head,20);
        head = Start_append(head,22);
        head = Start_append(head,25);
        head = Start_append(head,26);
        print(head,1);
    return 0;
}
