#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *next;
};
Node *Remove(Node *start,int k)
{
    if(k<1)
        cout<<"Invalid occour"<<endl;
    if(k==2)
    {
        start->next = start->next->next;

        return start;
    }
    start->next=Remove(start->next,k-1);
    return start;
}
void push(Node **headRef,int item)
{
    Node *new_node = new Node;
    new_node->data = item;
    new_node->next = *headRef;
    *headRef = new_node;

}
void print(Node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head= head->next;
    }
    cout<<endl;
}
int main()
{
    Node *head=NULL;
    push(&head,23);
    push(&head,22);
    push(&head,21);
    push(&head,20);
    push(&head,19);
    push(&head,18);
    head = Remove(head,3);
    print(head);
    return 0;
}
