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

Node * insertAtEnd(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
        return temp;
    Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
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
    Node *head=NULL;
    head=insertAtEnd(head,30);
    head=insertAtEnd(head,50);
    head=insertAtEnd(head,70);
    printList(head);
    return 0;
}