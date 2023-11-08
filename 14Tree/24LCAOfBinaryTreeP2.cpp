// Efficient Solution

// 1- Require one traversal and thetha(h) extra space
// for the recursive traversal

// 2- Assume that both n1 and n2 exist in the tree.
// Does not give correct results when only one (n1 or n2 ) exists 


// Idea

// Refer one note 
// We do normal recursive traversal.
// we have following cases for every node

// 1- if current node is same as n1 or n2
// 2- if one of it's subtrees  contains n1 and  other contains n2
// 3- if one of thes subtree contain both n1 or n2



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

Node* lca(Node* root,int n1,int n2)
{
    if(root==NULL)
        return NULL;
    
    if(root->key==n1 || root->key==n2)
        return root;
    
    Node* lca1=lca(root->left,n1,n2);
    Node* lca2=lca(root->right,n1,n2);
    if(lca1!=NULL && lca2 !=NULL)
        return root;
    if(lca1!=NULL)
        return lca1;
    else
        return lca2;
}

int main()
{
    // Node* root=new Node(10);
    // root->left=new Node(20);
    // root->right=new Node(30);
    // root->right->left=new Node(40);
    // root->right->right=new Node(50);
    // Node* ans=lca(root,40,50);
    // cout<<"answer is "<<ans->key<<" ";

    Node* root=new Node(10);
    root->left=new Node(50);
    root->left->left=new Node(70);
    root->left->left->left=new Node(40);
    root->right=new Node(60);
    root->left->right=new Node(20);
    root->left->right->left=new Node(90);
    root->left->right->left->left=new Node(30);
    root->left->right->right=new Node(80);
    Node* ans=lca(root,30,80);
    if(ans!=NULL)
        cout<<" \nans is "<< ans->key;
    else
        cout<<"\nNULL";
    return 0;
}