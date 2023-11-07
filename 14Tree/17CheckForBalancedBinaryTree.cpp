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

// // Naive Solution
// //O(n^2)

// int height(Node* root)
// {
//     if(root==NULL)  return 0;
//     return (1+max(height(root->left),height(root->right)));
// }
// bool isBalanced(Node* root)
// {
//     if(root==NULL)
//         return true;
//     int leftHeight=height(root->left);
//     int rightHeight=height(root->right);
//     return (abs(leftHeight-rightHeight)<=1 && isBalanced(root->left) && isBalanced(root->right));
// }
// int main()
// {
//     // Node* root=new Node(30);
//     // root->left=new Node(40);
//     // root->right=new Node(80);
//     // root->right->left=new Node(5);
//     // root->left->left=new Node(50);
//     // root->left->right=new Node(70);
//     // root->left->right->left=new Node(20);
//     // root->left->right->right=new Node(10);
//     Node* root=new Node(3);
//     root->left=new Node(4);
//     root->right=new Node(8);
//     root->right->right=new Node(7);
//     root->right->right->left=new Node(6);
//     root->left->left=new Node(5);
//     root->left->right=new Node(9);
//     bool ans=isBalanced(root);
//     cout<<" Is tree balanced? "<<ans<<" ";
//     return 0;
// }

// Efficient Solution

// using pairs(by storing the height and check for balanced tree)

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


int isBalanced(Node* root)
{
    if(root==NULL)
        return 0;
    int lh=isBalanced(root->left);
    if(lh==-1)
        return -1;
    int rh=isBalanced(root->right);
    if(rh==-1)
        return -1;
    if(abs(lh-rh)>1)
        return -1;
    else
        return max(lh,rh)+1;
}
int main()
{
    Node* root=new Node(8);
    root->left=new Node(12);
    root->right=new Node(15);
    root->left->left=new Node(13);
    root->left->right=new Node(14);
    root->right->right=new Node(16);
    root->right->right->right=new Node(17);

    int ans=isBalanced(root);
    cout<<"Answer is : "<<ans;
    return 0;
}