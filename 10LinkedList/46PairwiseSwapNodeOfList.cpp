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

// void swapNodes(Node* head)
// {
//     Node* curr=head;
//     while(curr!=NULL && curr->next!=NULL)
//     {
//         cout<<"\ntest2";
//         int data=curr->data;
//         curr->data=curr->next->data;
//         curr->next->data=data;
//         curr=curr->next->next;
//     }
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
//     Node *head=new Node(1);
//     head->next=new Node(2);
//     head->next->next=new Node(3);
//     head->next->next->next=new Node(4);
//     head->next->next->next->next=new Node(5);
//     // head->next->next->next->next->next=new Node(6);
//     printList(head);
//     swapNodes(head);
//     printList(head);
//     return 0;
// }


// Method 2
// By changing the pointer

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

Node* swapNodes(Node* head)
{
    if(head==NULL || head->next==NULL) return head;
    Node* curr=head->next->next;
    Node* prev=head;
    head=head->next;
    head->next=prev;
    while(curr!=NULL && curr->next!=NULL)
    {
        prev->next=curr->next;
        prev=curr;
        Node* next=curr->next->next;
        curr->next->next=curr;
        curr=next;
    }
    prev->next=curr;
    return head;
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
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    // head->next->next->next->next->next=new Node(6);
    printList(head);
    head=swapNodes(head);
    printList(head);
    return 0;
}