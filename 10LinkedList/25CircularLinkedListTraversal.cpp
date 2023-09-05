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

void traversal(Node* head)
{
    if(head==NULL)  return;
    Node* temp=head;
    cout<<"\n";
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
}

int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    traversal(head);
    return 0;
}