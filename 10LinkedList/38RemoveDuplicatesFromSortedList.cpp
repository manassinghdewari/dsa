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

Node* removeDuplicate(Node* head)
{
    if(head==NULL || head->next==NULL)
        return head;
    Node* curr=head;
    while(curr!=NULL && curr->next!=NULL)
    {
        if(curr->data==curr->next->data)
        {
            Node* temp=curr->next;
            curr->next=temp->next;
            delete (temp);
        }
        else
        {
            curr=curr->next;
        }
    }
    return head;
}

int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(20);
    head->next->next->next=new Node(30);
    head->next->next->next->next=new Node(30);
    head->next->next->next->next->next=new Node(30);
    printList(head);
    head=removeDuplicate(head);
    printList(head);
    return 0;
}