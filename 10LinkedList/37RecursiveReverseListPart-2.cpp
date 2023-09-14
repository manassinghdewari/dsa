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

Node* reverseList(Node *curr,Node* newHead)
{
    if(curr==NULL)
        return newHead;
    Node *next=curr->next;
    curr->next=newHead;
    newHead=curr;
    return reverseList(next,newHead);
}

int main()
{
    // Node* head=NULL;
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(25);
    head->next->next->next->next->next=new Node(30);
    printList(head);
    head=reverseList(head,NULL);
    printList(head);
    return 0;
}