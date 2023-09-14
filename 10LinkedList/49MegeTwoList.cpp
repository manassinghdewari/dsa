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

Node* mergeList(Node* a,Node* b)
{
    Node* head=NULL;
    Node* tail=NULL;

    if(a==NULL)
        return b;
    if(b==NULL)
        return a;
    while(a!=NULL && b!=NULL)
    {
        if((a->data)<=(b->data))
        {
            if(head==NULL)
            {
                head=a;
                tail=a;
            }
            else
            {
                tail->next=a;
                tail=a;
            }
            a=a->next;
        }
        else
        {
            if(head==NULL)
            {
                head=b;
                tail=b;
            }
            else
            {
                tail->next=b;
                tail=b;
            }
            b=b->next;
        }
    }
    if(a==NULL)
        tail->next=b;
    else
        tail->next=a;
    return head;
}
int main()
{
    Node *head1=new Node(10);
    head1->next=new Node(20);
    head1->next->next=new Node(30);
    // Node*head2=NULL;
    Node *head2=new Node(5);
    head2->next=new Node(25);
    printList(head1);
    printList(head2);
    Node* head=mergeList(head1,head2);
    printList(head);
    return 0;
}