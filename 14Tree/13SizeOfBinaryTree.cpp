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

int getSize(Node* root)
{
    if(root==NULL)
        return 0;
    return 1+getSize(root->left)+getSize(root->right);
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(15);
    root->right=new Node(20);
    root->left->left=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    root->right->left->left=new Node(60);
    root->right->left->right=new Node(70); 
    int size=getSize(root);
    cout<<"Size is : "<<size;
    return 0;
}

// this is iterative method 
// we can achive this using iterative method
// by using queue