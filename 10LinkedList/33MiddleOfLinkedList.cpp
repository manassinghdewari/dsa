// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     Node *next;
//     Node(int x)
//     {
//         data=x;
//         next=NULL;
//     }
// };

// void printList(Node *head)
// {
//     cout<<"\n";
//     while(head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

// int MiddleOfList(Node *head)
// {
//     if(head==NULL)
//         return -1;
//     int count=0;
//     Node* curr=head;
//     while(curr!=NULL)
//     {
//         count++;
//         curr=curr->next;
//     }
//     curr=head;
//     int mid;
//     if(count%2!=0)
//         mid=(count+1)/2;
//     else
//         mid=(count/2)+1;
//     while(curr!=NULL)
//     {
//         if(mid==1)
//             return curr->data;
//         curr=curr->next;
//         mid--;
//     }
// }

// int main()
// {
//     // Node* head=NULL;
//     Node *head=new Node(10);
//     head->next=new Node(5);
//     head->next->next=new Node(20);
//     head->next->next->next=new Node(15);
//     head->next->next->next->next=new Node(25);
//     head->next->next->next->next->next=new Node(30);
//     printList(head);
//     int middle=MiddleOfList(head);
//     cout<<"\nMiddle Element"<<middle;
//     return 0;
// }

// *********************************
//  Efficient Approch
// *********************************


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


// In the efficient way we are maintaining the two pointer 
// slow and fast
// every time we will increse the slow by 1 slow=slow->next
// and fast by 2 fast=fast->next->next
// when fast == NULL or fast->next ==NULL then the slow will return the middle 
// element
int MiddleOfList(Node *head)
{
    if(head==NULL)
        return -1;
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow->data;
}

int main()
{
    // Node* head=NULL;
    Node *head=new Node(10);
    head->next=new Node(5);
    head->next->next=new Node(20);
    head->next->next->next=new Node(15);
    head->next->next->next->next=new Node(25);
    // head->next->next->next->next->next=new Node(30);
    printList(head);
    int middle=MiddleOfList(head);
    cout<<"\nMiddle Element "<<middle;
    return 0;
}

