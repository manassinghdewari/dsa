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

void printlist(Node * x)
{
    cout<<x->data<<" ";
    if(x==NULL)
        return;
    printlist(x->next);
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printlist(head);
    return 0;
}