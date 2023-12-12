#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
 int data;
 Node *left;
 Node *right;
};
Node *create_node(int item)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;

}
void left_child(Node *node, Node *child)
{
   node->left = child;
}
void right_child(Node *node, Node *child)
{
   node->right = child;
}
Node *creating_tree()
{
    Node *two =create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    left_child(two,seven);
    right_child(two,nine);
    Node *one = create_node(1);
    Node *six = create_node(6);
    Node *eight = create_node(8);
    left_child(seven,one);
    right_child(seven,six);
    right_child(nine,eight);
    Node *five = create_node(5);
    Node *ten = create_node(10);
    Node *three = create_node(3);
    Node *four = create_node(4);
    left_child(six,five);
    right_child(six,ten);
    left_child(eight,three);
    right_child(eight,four);
    return two;
}
int main()
{
    Node *root;
    root = creating_tree();
    cout<<root->data<<endl;
    return 0;
}
