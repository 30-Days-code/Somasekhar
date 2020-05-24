// Write a program in C++ using binary search tree which will have basic functions
// such as Insertion(), Deletion(), Searching(), and Display() in a node-based binary tree data structure.
#include <stdio.h>
#include<iostream>
using namespace std;
struct bst_node
{
    int data;
    bst_node *left,*right;
};
void show_node(bst_node* node)
{
    cout<<"The node data is : "<<node->data;
}
bst_node* create_node(int data)
{
    bst_node *newnode = new bst_node;
    newnode->data = data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
bst_node* insert_node(bst_node *node,int data)
{
    if(node==NULL)
    {
        bst_node *temp=new bst_node;
        temp->data=data;
        temp->left=temp->right=NULL;
        return temp;
    }
    if(data>(node->data))
    {
        node->right=insert_node(node->right,data);
    }
    else if(data<(node->data))
    {
        node->left=insert_node(node->left,data);
    }
    return node;
}
bst_node* delete_node(bst_node *node, int data)
{
    bst_node *temp;
    if(node==NULL)
    {
        cout<<"Element Not Found";
    }
    else if(data < node->data)
    {
        node->left = delete_node(node->left, data);
    }
    else if(data > node->data)
    {
        node->right = delete_node(node->right, data);
    }
    else
    {
        temp = node;
        if(node->left == NULL)
            node = node->right;
        else if(node->right == NULL)
            node = node->left;
        free(temp);
    }
    return node;
}
bst_node* find_node(bst_node *node, int data)
{
    if(node==NULL)
    {
        return NULL;
    }
    if(data>node->data)
    {
        return find_node(node->right,data);
    }
    else if(data < node->data)
    {
        return find_node(node->left,data);
    }
    else
    {
        return node;
    }
}
void Inorder(bst_node *node)
{
    if(node==NULL)
    {
        return;
    }
    Inorder(node->left);
    cout<<node->data<<" ";
    Inorder(node->right);
}
void Preorder(bst_node *node)
{
    if(node==NULL)
    {
        return;
    }
    cout<<node->data<<" ";
    Preorder(node->left);
    Preorder(node->right);
}
void Postorder(bst_node *node)
{
    if(node==NULL)
    {
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    cout<<node->data<<" ";
}
int main()
{
    bst_node *root = NULL,*temp;
    int ch;
    while(1)
    {
        cout<<"\n1.Insert\n2.Delete\n3.Inorder\n4.Preorder\n5.Postorder\n6.Search\n7.Exit\n";
        cout<<"Enter ur choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            cout<<"\nEnter element to be insert:";
            cin>>ch;
            root = insert_node(root, ch);
            cout<<"\nElements in BST are:";
            Inorder(root);
            break;
        case 2:
            cout<<"\nEnter element to be deleted:";
            cin>>ch;
            root = delete_node(root,ch);
            cout<<"\nAfter deletion elements in BST are:";
            Inorder(root);
            break;
        case 3:
            cout<<"\nInorder Travesals is:";
            Inorder(root);
            break;
        case 4:
            cout<<"\nPreorder Traversals is:";
            Preorder(root);
            break;
        case 5:
            cout<<"\nPostorder Traversals is:";
            Postorder(root);
            break;
        case 6:
            cout<<"\nEnter element to be searched:";
            cin>>ch;
            temp = find_node(root,ch);
            if(temp==NULL)
            {
                cout<<"Element is not foundn";
            }
            else
            {
                cout<<"Element "<<temp->data<<" is Found\n";
            }
            break;
        case 7:
            exit(0);
            break;
        default:
            cout<<"\nEnter correct choice:";
            break;
        }
    }
    return 0;
}

