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
    Node *eight  =create_node(8);
    Node *three = create_node(3);
    Node *ten = create_node(10);
    left_child(eight,three);
    right_child(eight,ten);
    Node *one = create_node(1);
    Node *six = create_node(6);
    Node *forteen = create_node(14);
    left_child(three,one);
    right_child(three,six);
    right_child(ten,forteen);
    Node *seven = create_node(7);
    Node *thirteen = create_node(13);
    Node *four = create_node(4);
    left_child(six,four);
    right_child(six,seven);
    left_child(forteen,thirteen);
    return eight;
}
Node *bst_insert(Node *root,Node *node)
{
    Node *parrent_node, *current_node;
    if(root == NULL)
    {
        root = node;
        return root;
    }
    parrent_node = NULL;
    current_node = root;
    while(current_node != NULL)
    {
        parrent_node = current_node;
        if(node->data > current_node->data)
            current_node = current_node->right;
        else
            current_node = current_node->left;
    }
    if(node->data > parrent_node->data)
        right_child(parrent_node,node);
    else
        left_child(parrent_node,node);
    return root;


}
void preorder(Node *node)
{
    if(node != NULL)
    {

        cout<<node->data<<" ";

        preorder(node->left);

        preorder(node->right);
    }
}

int main()
{
    Node *root;
    root = creating_tree();
    Node *node = create_node(11);
    root = bst_insert(root,node);
    preorder(root);
    return 0;
}

