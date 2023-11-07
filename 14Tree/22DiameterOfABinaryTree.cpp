// // Diameter means longest path between two leaf nodes

// naive Solution O(n^2)

// Diameter means longest path between two leaf nodes
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
// int max_dia=INT_MIN;

// int height(Node* root)
// {
//     if(root==NULL)
//         return 0;
//     return (1+max(height(root->left),height(root->right)));
// }

// int diameter(Node* root)
// {
//     if(root==NULL)
//         return 0;
//     int d1=1+height(root->left)+height(root->right);
//     int d2=diameter(root->left);
//     int d3=diameter(root->right);
//     return max(d1,max(d2,d3));
// }

// void preorder(Node* root)
// {
//     if(root==NULL)  return;
//     cout<<root->key<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// int main()
// {
//     Node* root=new Node(10);
//     root->left=new Node(20);
//     root->right=new Node(30);
//     root->right->left=new Node(40);
//     root->right->right=new Node(60);
//     root->right->left->left=new Node(50);
//     root->right->right->right=new Node(70);
//     preorder(root);
//     cout<<"\n";
//     int ans=diameter(root);
//     cout<<"\nMaxDiameter is : "<< ans;
//     return 0;
// }

// ********************************
// Better Solution
// ********************************


// In the better solution
// we will store the height of each node in the map
// So height can be calculated in O(1) 
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
// int max_dia=INT_MIN;

// int height(Node* root)
// {
//     if(root==NULL)
//         return 0;
//     return (1+max(height(root->left),height(root->right)));
// }

// int diameter(Node* root)
// {
//     if(root==NULL)
//         return 0;
//     int d1=1+height(root->left)+height(root->right);
//     int d2=diameter(root->left);
//     int d3=diameter(root->right);
//     return max(d1,max(d2,d3));
// }

// void preorder(Node* root)
// {
//     if(root==NULL)  return;
//     cout<<root->key<<" ";
//     preorder(root->left);
//     preorder(root->right);
// }
// int main()
// {
//     Node* root=new Node(10);
//     root->left=new Node(20);
//     root->right=new Node(30);
//     root->right->left=new Node(40);
//     root->right->right=new Node(60);
//     root->right->left->left=new Node(50);
//     root->right->right->right=new Node(70);
//     preorder(root);
//     cout<<"\n";
//     int ans=diameter(root);
//     cout<<"\nMaxDiameter is : "<< ans;
//     return 0;
// }



// ********************************
// Efficient Solution
// ********************************

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
int max_dia=INT_MIN;

int height(Node* root)
{
    if(root==NULL)
        return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    max_dia=max(max_dia,1+rh+lh);
    return 1+max(rh,lh);
}

void preorder(Node* root)
{
    if(root==NULL)  return;
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node* root=new Node(10);
    root->left=new Node(20);
    root->right=new Node(30);
    root->right->left=new Node(40);
    root->right->right=new Node(60);
    root->right->left->left=new Node(50);
    root->right->right->right=new Node(70);
    preorder(root);
    cout<<"\n";
    int ans=height(root);
    cout<<"\nMaxDiameter is : "<< max_dia;
    return 0;
}