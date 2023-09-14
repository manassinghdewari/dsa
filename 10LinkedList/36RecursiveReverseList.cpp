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
Node* restHead=NULL;
Node* reverseList(Node* head)
{
    if(head==NULL && head->next==NULL)
        return head;
    if(head->next->next==NULL)
        restHead=head->next;
    else
    {
        restHead=reverseList(head->next);
    }
    Node* restTail=head->next;
    restTail->next=head;
    head->next=NULL;
    return restHead;
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
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(25);
    head->next->next->next->next->next=new Node(30);
    printList(head);
    head=reverseList(head);
    printList(head);
    return 0;
}