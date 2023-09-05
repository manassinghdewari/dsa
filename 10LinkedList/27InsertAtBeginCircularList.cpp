// ******************************
// Naive Approch
// ******************************

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

// Node* InsertAtBeginCirculatList(Node* head,int data)
// {
//     Node* temp=new Node(data);
//     if(head==NULL)
//     {
//          temp->next=temp;
//          return temp;
//     }   
    
//     Node* curr=head;
//     while(curr->next!=head)
//         curr=curr->next;
//     curr->next=temp;
//     temp->next=head;
//     return temp;

// }
// int main()
// {
//     // Node* head=NULL;
//     Node* head=new Node(10);
//     head->next=new Node(20);
//     head->next->next=new Node(30);
//     head->next->next->next=new Node(40);
//     head->next->next->next->next=head;
//     traversal(head);
//     head=InsertAtBeginCirculatList(head,5);
//     traversal(head);
//     return 0;
// }



// ******************************
// Efficient approach
// ******************************


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


//  in the efficient approach we will add a temp node after head
// then we will swap the data of head and temp
Node* InsertAtBeginCirculatList(Node* head,int x)
{
    Node* temp=new Node(x);
    if(head==NULL) 
    {
        temp->next=temp;
        return temp;
    }
    temp->next=head->next;
    head->next=temp;
    int data=head->data;
    head->data=temp->data;
    temp->data=data;
    return head;
}

int main()
{
        // Node* head=NULL;
    Node* head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    traversal(head);
    head=InsertAtBeginCirculatList(head,5);
    traversal(head);
    return 0;
    return 0;
}