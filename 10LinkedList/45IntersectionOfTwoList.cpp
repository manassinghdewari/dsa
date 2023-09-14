// Method 1 
// traverse the first list
// and store the address of the the list in the hastable
// now traverse the second list and check if the curr 
// node is present in the hash table or not
// time complexity O(m+n)
// O(m)

// Second Method

// in this method 
// first count the number of nodes in both list 
// lets call them c1 and c2
// now do abs(c1-c2)
// now traverse the bigger list abs(c1-c2) times
// now both list are of same length
// now iterate over both where address becomes same 
// that is the common node

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

int getInterSectioin(Node* h1,Node* h2)
{
    Node* curr1=h1;
    Node* curr2=h2;
    int c1=1,c2=1;
    while(curr1!=NULL)
    {
        c1++;
        curr1=curr1->next;
    }    
    while(curr2!=NULL)
    {
        c2++;
        curr2=curr2->next;
    }

    int diff=abs(c1-c2);
    curr1=h1;
    while(curr1!=NULL && diff>0)
    {
        curr1=curr1->next;
        diff--;
    }
    curr2=h2;
    while(curr1!=NULL && curr2!=NULL)
    {
        if(curr1==curr2)
            return curr1->data;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}
int main()
{
    Node *head1=new Node(5);
    head1->next=new Node(8);
    head1->next->next=new Node(7);
    head1->next->next->next=new Node(10);
    head1->next->next->next->next=new Node(12);
    head1->next->next->next->next->next=new Node(15);

    Node *head2=new Node(9);
    head2->next= head1->next->next->next;
    head2->next->next=head1->next->next->next->next;
    head2->next->next->next=head1->next->next->next->next->next;
    int common=getInterSectioin(head1,head2);
    cout<<"\ncommon: "<<common<<endl;
    return 0;
}
