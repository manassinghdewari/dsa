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

// void printList(Node *head)
// {
//     cout<<"\n";
//     while(head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

// // very important 

// Node* reverseInGroup(Node* head,int k)
// {
//     Node* prev=NULL;
//     Node* next=NULL;
//     Node* curr=head;
//     int count=0;
//     while(curr!=NULL && count<k)
//     {
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//         count++;
//     }
//     if(next!=NULL)
//     {
//         Node* restHead=reverseInGroup(next,k);
//         head->next=restHead;
//     }
//     return prev;
// }
// int main()
// {
//     Node *head=new Node(1);
//     head->next=new Node(2);
//     head->next->next=new Node(3);
//     head->next->next->next=new Node(4);
//     head->next->next->next->next=new Node(5);
//     // head->next->next->next->next->next=new Node(30);
//     printList(head);  
//     head=reverseInGroup(head,3);
//     printList(head);  
//     return 0;
// }


// ***********************************
// Iterative Approch
// ***********************************


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

void printList(Node *head)
{
    cout<<"\n";
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

// very important 

Node* reverseInGroup(Node* head,int k)
{
    bool isFirst=true;
    Node* prevFirst=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
        Node* first=curr;
        int count=0;
        Node* prev=NULL;
        while(curr!=NULL && count<k)
        {
            Node* next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        if(isFirst)
        {
            head=prev;
            isFirst=false;
        }
        else
        {
            prevFirst->next=prev;
        }
        prevFirst=first;
    }
    return head;
}
int main()
{
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    // head->next->next->next->next->next=new Node(30);
    printList(head);  
    head=reverseInGroup(head,3);
    printList(head);  
    return 0;
}