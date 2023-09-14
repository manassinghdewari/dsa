#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node* random;
    Node(int x)
    {
        data=x;
        next=NULL;
        random=NULL;
    }
};

void printList(Node *head)
{
    cout<<"\n";
    while(head!=NULL)
    {
        cout<<head->data<<" "<<head<<" ";
        head=head->next;
    }
}

Node* cloneList(Node* head)
{
    Node* curr=head;
    while(curr!=NULL)
    {
        Node* temp=new Node(curr->data);
        Node* next=curr->next;
        curr->next=temp;
        temp->next=next;
        curr=next;
    }
    curr=head;
    while(curr!=NULL )
    {
        curr->next->random=(curr->random !=NULL) ?  curr->random->next:NULL;
        curr=curr->next->next;
    }
    curr=head;
    Node* head2=NULL;
    Node*currClone=NULL;
    while(curr!=NULL)
    {
        Node* clone=curr->next;
        if(head2==NULL)
            currClone=head2=clone;
        else
        {
            currClone->next=clone;
            currClone=clone;
        }
        curr->next=clone->next;
        curr=curr->next;
    }
    return head2;
}

int main()
{
    Node* head=new Node(10);
    Node* N1=head;
    head->next=new Node(5);
    Node* N2=head->next;
    head->next->next=new Node(20);
    Node* N3=head->next->next;
    head->next->next->next=new Node(15);
    Node* N4=head->next->next->next;
    head->next->next->next->next=new Node(20);
    Node* N5=head->next->next->next->next;
    N1->random=N3;
    N2->random=N4;
    N3->random=N1;
    N4->random=N3;
    N5->random=N4;
    printList(head);
    head=cloneList(head);
    printList(head);
    return 0;
}