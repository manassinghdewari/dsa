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

void postOrder(Node* root)
{
    if(root)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->key<<" ";
    }
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    postOrder(root);
    return 0;
}

// TC-O(n)
// SC-O(n)