#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node
{
    int data;
    Node *previous;
    Node *next;
};

//creating a node

Node *create_node(int item, Node *previous, Node *next)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL)
    {
        cout<<"could not create new node"<<endl;
        exit(1);
    }
    new_node->data = item;
    new_node->previous = previous;
    new_node->next = next;
    return new_node;
}
//for print link list
void print (Node *head)
{
    if(head==NULL)
    {
        cout<<"There is no more node in the list"<<endl;
        return;
    }
    cout<<"Traversing forward"<<endl;
    Node *current_node = head;

    while(current_node->next!= NULL)
    {
        cout<<current_node->data<<" ";

        current_node = current_node->next;

    }

    cout<<current_node->data<<endl;

    cout<<endl;
    cout<<"Traversing Backward"<<endl;

    while(current_node != NULL)
    {
        cout<<current_node->data<<" ";
        current_node = current_node->previous;
    }
    cout<<endl;
}

//for prepend
Node *prepend(Node *head, int item)
{
    Node *new_node = create_node(item,NULL,head);
    if(head != NULL)
    {
        head->previous = new_node;

    }
    return new_node;
}
//adding node at last of the link list
Node *append(Node *head, int item)
{
    Node *new_Node = create_node(item,NULL,NULL);
    if(head == NULL)
        return new_Node;
    Node *current_node = head;
    while(current_node->next !=NULL)
        current_node = current_node->next;
    current_node->next = new_Node;
    new_Node->previous = current_node;
    return head;
}
void Insert(Node *node, int item)
{
    Node *new_Node = create_node(item,node,node->next);
    Node *current_node = node->next;
    current_node->previous = new_Node;
    node->next = new_Node;

}
Node *Remove(Node *node, Node *head)
{

    if(node==head)
    {
        head=node->next;
        if(node->next!=NULL)
        {
              Node *current_node = node->next;
              current_node->previous=NULL;
        }

        free(node);
        return head;
    }
    Node *previous = node->previous;
    Node *next = node->next;
    previous->next = next;
    if(next!=NULL)
    next->previous = previous;
    free(node);
    return head;
}


//main function
int main()
{
    Node *head;
    head = prepend(NULL,15);
    head = prepend(head,20);
    head = append(head,24);
    Node *n = head->next;

    Insert(n,33);
    head = Remove(n,head);
    print(head);

    return 0;
}
