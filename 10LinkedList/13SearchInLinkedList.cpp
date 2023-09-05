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


// int searchNode(Node * head,int x)
// {
//     int count=1;
//     while(head!=NULL)
//     {
//         if(head->data==x)
//             return count;
//         count++;
//         head=head->next;
//     }
//     return -1;
// } 

int searchNode(Node * head,int x,int pos)
{
    if(head==NULL)
        return -1;
    if(head->data==x)
        return pos;
    return searchNode(head->next,x,pos+1); 
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    printList(head);
    int pos=searchNode(head,30,1);
    cout<<"\n the element present at "<<pos<<"\n"; 
    return 0;
}