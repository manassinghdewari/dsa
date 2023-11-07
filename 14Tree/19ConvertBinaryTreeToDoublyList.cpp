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
Node* previous=NULL;
Node* BToDLL(Node* root)
{
    if(root == NULL)
        return root;
    Node* head =BToDLL(root->left);
    if(previous==NULL)
        head=root;
    else    
    {
        root->left=previous;
        previous->right=root;
    }
    previous=root;
    BToDLL(root->right);
    return head;
}

void printDLL(Node* head)
{
    cout<<"\n";
    Node* curr=head;
    while(curr!=NULL)
    {
        cout<<curr->key<<" ";
        curr=curr->right;
    }
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(5);
    root->right=new Node(20);
    root->right->left=new Node(30);
    root->right->right=new Node(35);
    Node* head=BToDLL(root);
    printDLL(head);
    return 0;
}