// // In this problem we have to print left most node in 
// // each level

// Recursive Solution

// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int key;
//     Node *left;
//     Node *right;
//     Node(int k)
//     {
//         key=k;
//         left=NULL;
//         right=NULL;
//     }
// };

// int maxLevel=0;
// void printLeftView(Node* root,int level)
// {
//     if(root==NULL)  return;
//     if(maxLevel<level)
//     {
//         cout<<root->key<<" ";
//         maxLevel=level;
//     }
//     printLeftView(root->left,level+1);
//     printLeftView(root->right,level+1);
// }

// int main()
// {
//     Node* root=new Node(10);
//     root->left=new Node(20);
//     root->right=new Node(30);
//     root->right->left=new Node(40);
//     root->right->right=new Node(50);
//     printLeftView(root,1);
//     return 0;
// }


// Iterative Method

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

void printLeftView(Node* root)
{
    if(root==NULL)  return;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        int count=q.size();
        for(int i=0;i<count;i++)
        {
            Node* curr=q.front();
            q.pop();
            if(i==0)
                cout<<curr->key<<" ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
    }
}

int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(50);
    printLeftView(root);
    return 0;
}