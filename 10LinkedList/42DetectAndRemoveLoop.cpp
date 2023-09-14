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

// 1->Detect loop using Floyds detection algorithm

// 2->Move "slow" pointer to the beginning of linked list and
// keep "fast" pointer at the meeting point

// 3-> Now one by one move slow and fast at same speed
// The point where they meet now is the first node of the loop


void deleteLoop(Node* head)
{
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            break;
    }
    // if no loop
    if(slow!=fast)
        return;
    slow=head;
    while(slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    fast->next=NULL;
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
    Node *head=new Node(10);
    head->next=new Node(15);
    head->next->next=new Node(12);
    head->next->next->next=new Node(20);
    head->next->next->next->next=head->next;
    deleteLoop(head);
    printList(head);
    return 0;
}