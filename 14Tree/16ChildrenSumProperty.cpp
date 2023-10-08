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

bool isChildrenSum(Node* root)
{
    if(root==NULL)  return true;
    if(root->left==NULL and root->right==NULL) 
        return true;
    int sum=0;
    if(root->right!=NULL ) 
        sum+=root->right->key;
    if(root->left!=NULL)
        sum+=root->left->key;
    return((sum==root->key) && isChildrenSum(root->left) && isChildrenSum(root->right));
}

int main()
{
    Node* root=new Node(20);
    root->left=new Node(8);
    root->right=new Node(12);
    root->right->left=new Node(3);
    root->right->right=new Node(9);
    bool ans=isChildrenSum(root);
    cout<<"answer is: "<<ans;
    return 0;
}