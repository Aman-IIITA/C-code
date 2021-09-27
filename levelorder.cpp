#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node* newnode(int val)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}

struct node* BST(struct node* root,int val)
{
    if(root==NULL)
    {
        return newnode(val);
    }
    if(root->data>val)
    root->left=BST(root->left,val);
    if(root->data<val)
    root->right=BST(root->right,val);
    return root;
}
struct node* search(struct node* root,int val)
{
    if(root==NULL)
    return NULL;
    if(root->data==val)
    return root;
    if(val<root->data)
    return search(root->left,val);
    if(val>root->data)
    return search(root->right,val);
}
void inorder(struct node* root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
struct node* BSTdel(struct node* root, int val)
{
    if(root==NULL)
    return root;
    if(val<root->data)
    root->left=BSTdel(root->left,val);
    if(val>root->data)
    root->right=BSTdel(root->right,val);
    else
    {
        if(root->left==NULL)
        {
            struct node* temp=root->right;
            free(root);
            return temp;
        }
        if(root->right==NULL)
        {
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        else
        {
            struct node* temp=root->right;
            while(temp->left) 
            temp=temp->left;
            root->data=temp->data;
            root->right=BSTdel(root->right,temp->data);
        }
    }
    return root;
}
int main()
{
    struct node* root=NULL;
    root=BST(root,7);
    root=BST(root,4);
    root=BST(root,1);
    root=BST(root,5);
    root=BST(root,3);
    root=BST(root,2);
    root=BST(root,6);
    inorder(root);
    // int x;
    // cin>>x;
    // if(search(root,x))
    // cout<<"Value Found\n";
    // else
    // cout<<"Value not Found\n";
    root=BSTdel(root,1);
    cout<<"\n";
    inorder(root);
    return 0;
}