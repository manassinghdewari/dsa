#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data=d;
        prev=NULL;
        next=NULL;
    }
};

void printList(Node* head)
{
    Node* temp=head;
    cout<<"\n";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* reverseList(Node* head)
{
    if(head==NULL || head->next==NULL)  return head;
    Node *curr=head;
    Node *prev=NULL;
    while(curr!=NULL)
    {
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev; 
        curr=curr->prev; 
    }
    // if you are getting confuse why are we returing 
    // prev->prev as a head
    // then do a rough calculation
    // it will easily understandable
    
    return prev->prev; 
}

int main()
{
    Node *head=new Node(10);
    // Node *head=NULL;
    Node *temp1=new Node(20);
    Node *temp2=new Node(30);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    printList(head);
    head=reverseList(head);
    printList(head);
    return 0;
}