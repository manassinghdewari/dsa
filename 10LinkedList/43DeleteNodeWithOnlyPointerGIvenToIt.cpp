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


// Not applicable for deleting last node

void deleteNodeUsingAddress(Node* address)
{
    Node* temp=address->next;
    address->data=temp->data;
    address->next=temp->next;
    delete temp;

}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(15);
    head->next->next=new Node(12);
    head->next->next->next=new Node(20);
    printList(head);
    deleteNodeUsingAddress(head->next->next);
    printList(head);
    return 0;
}