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

Node* insertBySort(Node* head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
        return temp;
    
    if(data<head->data)
    {
        temp->next=head;
        return temp;
    }

    Node* curr=head;
    while(curr->next!=NULL && curr->next->data<data)
        curr=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head);
    head=insertBySort(head,20);
    printList(head);
    return 0;
}