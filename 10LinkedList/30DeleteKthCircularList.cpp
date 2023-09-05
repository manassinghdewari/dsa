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

Node* DeleteHeadCirculatList(Node* head)
{
    if(head==NULL) return NULL;
    if(head->next==head)
    {
        delete head;
        return NULL;
    }
    head->data=head->next->data;
    Node* temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}

Node* deleteKth(Node* head,int k)
{
    if(head==NULL) return head;
    if(k==1) return DeleteHeadCirculatList(head);
    Node* curr=head;
    for(int i=0;i<k-2;i++)
        curr=curr->next;
    Node* temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}

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
    head=deleteKth(head,2);
    traversal(head);
    return 0;
}