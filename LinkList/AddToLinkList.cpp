#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *create_node(int item,Node *next)
{
    Node *new_Node = (Node *)malloc(sizeof(Node));
    if(new_Node == NULL)
    {
        cout<<"Could not create a new node"<<endl;
        exit(1);
    }
    new_Node->data = item;
    new_Node->next = next;
    return new_Node;
}

//Adding a node before link list
Node *prepend(Node *head, int item)
{
    Node *new_Node = create_node(item,head);
    return new_Node;
}

//Adding a item after link list
Node *append(Node *head, int item)
{
    Node *new_Node = create_node(item, NULL);
    if(head == NULL)
        return new_Node;

    Node *current_node = head;

    while(current_node->next != NULL)
        current_node = current_node->next;
    current_node->next = new_Node;
    return head;
}
//Adding a node in middle of link list

void Insert(Node *node,int item)
{
    Node *new_Node = create_node(item,node->next);
    node->next = new_Node;

}

//main function
int main()
{
    Node *head;
    head = prepend(NULL,13);
    head = prepend(head,15);
    head = prepend(head,19);
    head = prepend(head,17);
    head = append(head,21);
    Node *new_Node = head->next;
    Insert(new_Node,54);
    Node *travas;
    travas = head;
    while(travas!= NULL)
    {
        cout<<travas->data<<endl;
        travas = travas->next;

    }

    return 0;
}
