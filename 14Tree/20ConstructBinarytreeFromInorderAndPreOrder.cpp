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

int preIndex=0;
Node* constructTree(int inorder[],int preorder[],int istart,int iend)
{
    if(istart>iend)
        return NULL;
    Node* root=new Node(preorder[preIndex++]);
    int inIndex;
    for(int i=istart;i<=iend;i++)
    {
        if(inorder[i]==root->key)
        {   
            inIndex=i;
            break;
        }
    }

    root->left=constructTree(inorder,preorder,istart,inIndex-1);
    root->right=constructTree(inorder,preorder,inIndex+1,iend);
    return root;
}

void preOrderTraversal(Node* root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}
int main()
{
    int inorder[]={20,10,40,30,50};
    int preorder[]={10,20,30,40,50};
    int n=5;
    Node* root=constructTree(inorder,preorder,0,n-1);
    preOrderTraversal(root);
    return 0;
}