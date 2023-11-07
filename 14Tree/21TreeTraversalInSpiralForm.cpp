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

// void printSpiral(Node* root)
// {
//     if(root==NULL) return;
//     queue<Node*> q;
//     stack<int>s;
//     q.push(root);
//     bool reverse=false;
//     while(!q.empty())
//     {
//         int count=q.size();
//         for(int i=0;i<count;i++)
//         {
//             Node* curr=q.front();
//             q.pop();
//             if(reverse)
//                 s.push(curr->key);
//             else
//                 cout<<curr->key<<" ";
//             if(curr->left!=NULL)
//                 q.push(curr->left);
//             if(curr->right!=NULL)
//                 q.push(curr->right);
//         }
//         if(reverse)
//         {
//             while(!s.empty())
//             {
//                 cout<<s.top()<<" ";
//                 s.pop();
//             }
//         }
//         cout<<"\n";
//         reverse=!reverse;
//     }
// }

// int main()
// {
//     Node* root=new Node(1);
//     root->left=new Node(2);
//     root->right=new Node(3);
//     root->left->left=new Node(4);
//     root->left->right=new Node(5);
//     root->right->left=new Node(6);
//     root->right->right=new Node(7);
//     printSpiral(root);
//     return 0;
// }


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

void printSpiral(Node* root)
{
    if(root==NULL) return;
    stack<Node*>s1;
    stack<Node*>s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty())
    {
        if(s2.empty())
        {
            while(!s1.empty())
            {
                Node* temp=s1.top();
                s1.pop();
                cout<<temp->key<<" ";
                if(temp->left!=NULL)
                    s2.push(temp->left);
                if(temp->right!=NULL)
                    s2.push(temp->right);
            }
        }
        else
        {
            while(!s2.empty())
            {
                Node* temp=s2.top();
                s2.pop();
                cout<<temp->key<<" ";
                if(temp->right!=NULL)
                    s1.push(temp->right);
                if(temp->left!=NULL)
                    s1.push(temp->left);
            }


        }
    }

}

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->left->left=new Node(8);
    root->left->left->right=new Node(9);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->left->left=new Node(10);
    root->right->left->right=new Node(11);
    root->right->right=new Node(7);
    printSpiral(root);
    return 0;
}