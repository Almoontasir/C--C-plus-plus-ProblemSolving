#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
 int data;
 Node *left;
 Node *right;
 Node *parrent;
};
Node *create_node(int item)
{
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->data = item;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->parrent = NULL;
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
void parrent(Node *child, Node *parrent)
{
    child->parrent = parrent;
}
Node *creating_tree()
{
    Node *eight  =create_node(8);
    Node *three = create_node(3);
    Node *ten = create_node(10);

    left_child(eight,three);
    parrent(three,eight);
    right_child(eight,ten);
    parrent(ten,eight);
    Node *one = create_node(1);
    Node *six = create_node(6);
    Node *forteen = create_node(14);
    left_child(three,one);
    parrent(one,three);
    right_child(three,six);
    parrent(six,three);    right_child(ten,forteen);
    parrent(forteen,ten);
    Node *seven = create_node(7);
    Node *thirteen = create_node(13);
    Node *four = create_node(4);
    left_child(six,four);
    parrent(four,six);
    right_child(six,seven);
    parrent(seven,six);
    left_child(forteen,thirteen);
    parrent(thirteen,forteen);
    return eight;
}
Node *Transplant(Node *root, Node *current_node, Node *node )
{
    if(current_node == root)
    {
        root = node;

    }
    else if(current_node == current_node->parrent->left)
        {

            left_child(current_node->parrent,node);
        }
    else{
        right_child(current_node->parrent,node);
        }
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
Node *Search(Node *root, int item)
{
    Node *node = root;
    while(node != NULL)
    {
        if(node->data == item)
            return node;
        else if(node->data > item)
            node = node->left;
        else
            node = node->right;
    }
    return node;
}
int main()
{
    Node *root;
    root = creating_tree();
    int item1, item2 ;
    cin>>item1;
    cin>>item2;

    Node *current_node = Search(root,item1);
    Node *node = Search(root,item2);
    cout<<node->data<<endl;
    root = Transplant(root,current_node,node);
    Node *n = root->left;
//    Node *m = n->left;

    preorder(root);


    return 0;
}

