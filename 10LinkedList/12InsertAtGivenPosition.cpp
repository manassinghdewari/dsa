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

Node * insertAtGivenPos(Node *head,int pos,int data)
{
    int count=1; 

    Node *temp=new Node(data);
    Node *curr=head;
    if(pos==1)
    {
        temp->next=head;
        return temp;
    }
    while(count !=pos-1)
    {
        curr=curr->next;
        count++;
    }
    if(curr->next ==NULL)
    {
        curr->next=temp;
        return head;
    }
    // for out of bound
    if(curr ==NULL)
        return head;
    temp->next=curr->next;
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
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head);
    head=insertAtGivenPos(head,5,50);
    printList(head);
    return 0;
}