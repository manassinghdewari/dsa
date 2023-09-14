#include<bits/stdc++.h>
using namespace std;

// In this algorithm we maintain two pointer slow and fast
// slow moves 1 step and fast moves 2 steps
// So according to floyd's algorithm if there is a loop
// in a list then slow and fast pointer will meet at a certain
// point 

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

bool checkLoop(Node* head)
{
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
            return true;
    }
    return false;
}
int main()
{
    // Node *head=NULL;
    Node *head=new Node(10);
    head->next=new Node(15);
    head->next->next=new Node(12);
    head->next->next->next=new Node(20);
    head->next->next->next->next=head->next;
    
    // printList(head); 
    bool ans=checkLoop(head);
     if(ans)  cout<<"\n there is loop"; else cout<< " There is no loop";
    return 0;
}