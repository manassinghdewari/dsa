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

Node * deleteHead(Node *head)
{
    if(head==NULL)
        return NULL;
    else
    {
        Node *temp=head->next;
        delete head;
        head=head->next;
        return temp;
    }
}
int main()
{
    Node *head=new Node(70);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head);
    head=deleteHead(head);
    printList(head);
    return 0;
}