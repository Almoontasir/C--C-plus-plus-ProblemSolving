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


//struct Node {
//    int data;
//    struct Node* next;
//};
//
//// Function to push nodes
//// into linked list
//void push(Node** head, int new_data)
//{
//    Node* new_node = new Node;
//    new_node->data = new_data;
//    new_node->next = (*head);
//    (*head) = new_node;
//}


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
void split(Node *Odd,Node *Even)
{

   if(!Odd||!Even)
    return;
   if(Odd->next)
    Odd->next = Odd->next->next;
   if(Even->next)
    Even->next=Even->next->next;
   split(Odd->next,Even->next);
//   if(!Odd->previous)
//    Odd->previous=Odd->previous->previous;
//   if(!Even->previous)
//    Even->previous=Even->previous->previous;
}
void display(Node* head)
{
    Node* curr = head;
    while (curr != NULL) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}
//void alternateSplitLinkedList(Node* head, Node** aRef,
//                                        Node** bRef)
//{
//    Node* curr = head;
//    *aRef = curr;
//    *bRef = curr->next;
//    split(*aRef,*bRef);
//}
int main()
{
    Node *head = NULL;

        head = Start_append(head,1);
        head = Start_append(head,2);
        head = Start_append(head,3);
        head = Start_append(head,4);
        Node *tail = NULL;
//        Node *Odd = NULL;
//        Node *Even = NULL;


//    Node* head = NULL;
//    Node *Odd = NULL, *Even = NULL;
//
////    push(&head, 7);
////    push(&head, 6);
////    push(&head, 5);
//    push(&head, 4);
//    push(&head, 3);
//    push(&head, 2);
//    push(&head, 1);


//        alternateSplitLinkedList(head,&Odd,&Even);
        Node *Odd = head;
        Node *Even = head->next;
        split(Odd,Even);

        print(Odd,&tail);
        cout<<endl;
        print(Even,&tail);
        cout<<endl;

//        printBack(tail);
    return 0;
}
