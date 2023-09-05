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

Node * InsertAtBegin(Node* head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->next=head;
    temp->prev=head->prev;
    head->prev->next=temp;
    head->prev=temp;
    return temp;
}

Node* InsertAtEnd(Node* head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;
    return head;
}

void traversal(Node* head)
{
    Node* curr=head->next;

    cout<<"\n";
    cout<<head->data<<" ";
    while(curr!=head)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->prev=head;
    head->next->next=new Node(15);
    head->next->next->prev=head->next;
    head->next->next->next=new Node(30);
    head->next->next->next->prev=head->next->next;
    head->next->next->next->next=head;
    head->prev=head->next->next->next;
    traversal(head);
    head=InsertAtBegin(head,5);
    traversal(head);
    head=InsertAtEnd(head,40);
    traversal(head);
    return 0;
}