
// // ****************************************
// // Naive Solution
// // ****************************************

// #include<bits/stdc++.h>
// using namespace std;


// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data=x;
//         next=NULL;
//     }
// };

// Node* reverseList(Node* head)
// {
//     vector<int>arr;
//     Node* curr=head;
//     while(curr !=NULL)
//     {
//         arr.push_back(curr->data);
//         curr=curr->next;
//     }
//     curr=head;
//     while(curr !=NULL)
//     {
//         curr->data=arr.back();
//         arr.pop_back();
//         curr=curr->next;
//     }
//     return head;
// }

// void printList(Node *head)
// {
//     cout<<"\n";
//     while(head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

// int main()
// {
//     Node *head=new Node(10);
//     head->next=new Node(5);
//     head->next->next=new Node(20);
//     head->next->next->next=new Node(15);
//     head->next->next->next->next=new Node(25);
//     // head->next->next->next->next->next=new Node(30);
//     printList(head);
//     head=reverseList(head);
//     printList(head);
//     return 0;
// }



// *******************************************
// Efficient Solution
// *******************************************


// ****************************************
// Naive Solution
// ****************************************

#include<bits/stdc++.h>
using namespace std;


struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};

Node* reverseList(Node* head)
{
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL)
    {
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void printList(Node *head)
{
    cout<<"\n";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

int main()
{
    // Node* head=NULL;
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(25);
    head->next->next->next->next->next=new Node(30);
    printList(head);
    head=reverseList(head);
    printList(head);
    return 0;
}