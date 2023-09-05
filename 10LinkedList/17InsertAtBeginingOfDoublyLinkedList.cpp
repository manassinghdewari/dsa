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

Node* insertAtBeginning(Node* head,int d)
{
    Node* temp=new Node(d);
    temp->next=head;
    if(head!=NULL)
        head->prev=temp;
    return temp;
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
    head=insertAtBeginning(head,5);
    printList(head);
    return 0;
}