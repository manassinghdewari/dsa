// // *************************
// // Naive implementation using stack
// // we will list item into stack
// // will iterate through it again
// // pop from the stack check they are same or not
// // if not same then return false
// // *************************
// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     char data;
//     Node *next;
//     Node(char x)
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

// bool isPalindrome(Node* head)
// {
//     stack<char> st;
//     Node* curr=head;
//     while(curr!=NULL)
//     {
//         st.push(curr->data);
//         curr=curr->next;
//     }
//     curr=head;
//     while(curr!=NULL)
//     {
//         if(st.top()!=(curr->data))
//             return false;
//         st.pop();
//         curr=curr->next;
//     }
//     return true;
// }

// int main()
// {
//     // Node *head=new Node('r');
//     // head->next=new Node('a');
//     // head->next->next=new Node('d');
//     // head->next->next->next=new Node('a');
//     // head->next->next->next->next=new Node('r');
//     // head->next->next->next->next->next=new Node(6);
//     Node *head=new Node('g');
//     head->next=new Node('e');
//     head->next->next=new Node('e');
//     head->next->next->next=new Node('k');
//     printList(head);
//     bool ans=isPalindrome(head);
//     cout<<"\n isPalindrom "<<ans;
//     return 0;
// }



// *************************
// Efficient implementation 
// we will first find the middle node
// then reverse the list after the middle node
// *************************
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    char data;
    Node *next;
    Node(char x)
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

Node* reverseList(Node* head)
{
    if(head==NULL ||head->next==NULL)
        return head;
    Node* curr=head;
    Node* prev=NULL;
    while(curr!=NULL)
    {
        Node* next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}
bool isPalindrome(Node* head)
{
    if(head==NULL)
        return false;
    // to find mid node
    Node* slow=head;
    Node* fast=head;

    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    // reverse list after mid node
    cout<<"\ntest2";
    cout<<"\nmid "<<slow->data;
    Node* rev=reverseList(slow->next);
    Node* curr=head;
    while(rev!=NULL)
    {
        if(rev->data !=curr->data)
            return false;
        rev=rev->next;
        curr=curr->next;
    }
    return true;
}

int main()
{
    Node *head=new Node('r');
    head->next=new Node('a');
    head->next->next=new Node('d');
    head->next->next->next=new Node('a');
    head->next->next->next->next=new Node('r');
    // head->next->next->next->next->next=new Node(6);
    // Node *head=new Node('g');
    // head->next=new Node('e');
    // head->next->next=new Node('e');
    // head->next->next->next=new Node('k');
    printList(head);
    bool ans=isPalindrome(head);
    cout<<"\n isPalindrom "<<ans;
    return 0;
}