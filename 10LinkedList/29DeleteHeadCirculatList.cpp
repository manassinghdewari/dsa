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

// void traversal(Node* head)
// {
//     if(head==NULL)  return;
//     Node* temp=head;
//     cout<<"\n";
//     do
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }while(temp!=head);
// }

// Node* DeleteHeadCirculatList(Node* head)
// {
//     if(head==NULL) return NULL;
//     if(head->next==head)
//     {
//         delete head;
//         return NULL;
//     }
//     Node* curr=head;
//     while(curr->next!=head)
//         curr=curr->next;
//     curr->next=head->next;
//     delete head;
//     return (curr->next);
// }
// int main()
// {
//     Node* head=new Node(10);
//     head->next=new Node(20);
//     head->next->next=new Node(30);
//     head->next->next->next=new Node(40);
//     head->next->next->next->next=head;
//     traversal(head);
//     head=DeleteHeadCirculatList(head);
//     traversal(head);
//     return 0;
// }


// Efficient Approach

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
int main()
{
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    traversal(head);
    head=DeleteHeadCirculatList(head);
    traversal(head);
    return 0;
}