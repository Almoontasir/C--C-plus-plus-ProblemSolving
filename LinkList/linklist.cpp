#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node
{
    int data;
    Node *next;
};
Node *create_node(int item,Node *next);

int main()
{
    Node *n;
    int m = 13;
    n = create_node(m,NULL);
    cout<<n<<endl;

    return 0;
}

Node *create_node(int item,Node *next)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    if(new_node == NULL)
    {
        cout<<"Could not create a new node"<<endl;
        exit(1);
    }
    new_node->data = item;
    new_node->next = next;
    return new_node;
}
