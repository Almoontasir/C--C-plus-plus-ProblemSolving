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
    Node *ten= create_Node(10);
    Node *five = create_Node(5);
    Node *seventeen= create_Node(17);
    left_child(ten,five);
    right_child(ten,seventeen);
    find_parrent(five,ten);
    find_parrent(seventeen,ten);

    Node *three = create_Node(3);
    Node *seven= create_Node(7);
    left_child(five,three);
    right_child(five,seven);
    find_parrent(three,five);
    find_parrent(seven,five);

    Node *one = create_Node(1);
    Node *four= create_Node(4);
    left_child(three,one);
    right_child(three,four);
    find_parrent(one,three);
    find_parrent(four,three);



    Node *twleve = create_Node(12);
    Node *ninteen= create_Node(19);
    left_child(seventeen,twleve);
    right_child(seventeen,ninteen);
    find_parrent(twleve,seventeen);
    find_parrent(ninteen,seventeen);
  return ten;
}

void Search(Node *node,int item)
{
    if(!node)
    {
        cout<<"The node is not there"<<endl;
        return;
    }

    if(node->data==item)
    {

        cout<<"The node is child of "<<node->parrent->data<<endl;
        return;
    }
    if(node->data<=item)
        Search(node->right,item);
    else
        Search(node->left,item);
}

int main()
{
    Node *root = create_tree();


    Search(root,0);
    return 0;
}

