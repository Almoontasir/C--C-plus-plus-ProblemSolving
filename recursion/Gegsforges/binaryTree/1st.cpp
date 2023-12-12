#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node{
    int data;
    Node *left;
    Node *right;
    Node *parrent;
};
Node *create_Node(int item)
{
    Node *new_node = (Node*)malloc(sizeof(Node));
    if(!new_node)
        cout<<"can't allocate memory"<<endl;
    new_node->data = item;
    new_node->left= NULL;
    new_node->right=NULL;
    new_node->parrent=NULL;
    return new_node;

}
void left_child(Node *parrent,Node *child)
{
    parrent->left = child;
}
void right_child(Node *parrent,Node *child)
{
    parrent->right=child;
}
void find_parrent(Node *child,Node *parrent)
{
    child->parrent = parrent;
}
Node *create_tree()
{
    Node *two = create_Node(2);
    Node *seven = create_Node(7);
    Node *nine= create_Node(9);
    left_child(two,seven);
    right_child(two,nine);
    find_parrent(seven,two);
    find_parrent(nine,two);

    Node *one = create_Node(1);
    Node *six= create_Node(6);
    left_child(seven,one);
    right_child(seven,six);
    find_parrent(one,seven);
    find_parrent(six,seven);

    Node *five = create_Node(5);
    Node *ten= create_Node(10);
    left_child(six,five);
    right_child(six,ten);
    find_parrent(five,six);
    find_parrent(ten,six);

     Node *eight= create_Node(8);
    right_child(nine,eight);
    find_parrent(eight,nine);

    Node *three = create_Node(3);
    Node *four= create_Node(4);
    left_child(eight,three);
    right_child(eight,four);
    find_parrent(three,eight);
    find_parrent(four,eight);
  return two;
}

//void Search(Node *node,int item)
//{
//    cout<<node->data<<endl;
//    if(!node)
//    {
//        cout<<"The node is not there"<<endl;
//        return;
//    }
//    if(node->data==item)
//    {
//
//        cout<<"The node is child of "<<node->parrent->data<<endl;
//        return;
//    }
//    if(node->data>=item)
//        Search(node->right,item);
//    else
//        Search(node->left,item);
//}
void leaf_Node(Node *node)
{
    if(!node)
        return;
    if(!node->left && !node->right)
    {
        cout<<node->data<<" ";
        return;
    }

     if(node->left)
        leaf_Node(node->left);
     if(node->right)
        leaf_Node(node->right);
}

int main()
{
    Node *root = create_tree();
    leaf_Node(root);


//    Search(root,5);
    return 0;
}

