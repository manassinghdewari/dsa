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

// Node* SegregateEvenOdd(Node* head)
// {
//     Node* first=head;
//     Node* second=head;
//     while(first!=NULL && second!=NULL)
//     {
//         while(first!=NULL&&(first->data)%2==0)
//         {
//             // cout<<"\nfirst"<<first->data;
//             first=first->next;
//         }
//         while(second!=NULL&&(second->data)%2!=0)
//         {
//             // cout<<"\nSecond"<<second->data;
//             second=second->next;
//         }
//         if(first==NULL || second==NULL)
//             break;
//         int data=first->data;
//         first->data=second->data;
//         second->data=data;
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
//     Node *head=new Node(17);
//     head->next=new Node(15);
//     head->next->next=new Node(8);
//     head->next->next->next=new Node(12);
//     head->next->next->next->next=new Node(10);
//     head->next->next->next->next->next=new Node(5);
//     head->next->next->next->next->next->next=new Node(4);
//     printList(head);
//     head=SegregateEvenOdd(head);
//     printList(head);
//     return 0;
// }


// ********************************
// Method 2
// ********************************


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

Node* SegregateEvenOdd(Node* head)
{
    Node* curr=head;
    Node* evenStart=NULL;
    Node* evenEnd=NULL;
    Node* oddStart=NULL;
    Node* oddEnd=NULL;
    while(curr!=NULL)
    {
        int x=curr->data;
        if(x%2==0)
        {
            if(evenStart==NULL)
            {
                evenStart=curr;
                evenEnd=curr;
            }
            else
            {
                evenEnd->next=curr;
                evenEnd=evenEnd->next;
            }
        }
        else
        {
            if(oddStart==NULL)
            {
                oddStart=curr;
                oddEnd=curr;
            }
            else
            {
                oddEnd->next=curr;
                oddEnd=oddEnd->next;
            }
        }
        curr=curr->next;
    }
    if(evenStart==NULL || oddStart==NULL)
        return head;
    evenEnd->next=oddStart;
    oddEnd->next=NULL;
    return evenStart;
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
    Node *head=new Node(17);
    head->next=new Node(15);
    head->next->next=new Node(9);
    head->next->next->next=new Node(13);
    head->next->next->next->next=new Node(19);
    head->next->next->next->next->next=new Node(5);
    head->next->next->next->next->next->next=new Node(5);
    printList(head);
    head=SegregateEvenOdd(head);
    printList(head);
    return 0;
}