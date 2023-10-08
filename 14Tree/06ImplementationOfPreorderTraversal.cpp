#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int k)
    {
        key=k;
        left=NULL;
        right=NULL;
    }
};

void preorder(Node *root)
{
    if(root)
    {
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    preorder(root);
    return 0;
}