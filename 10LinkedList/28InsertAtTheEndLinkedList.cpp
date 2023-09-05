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

// Node* InsertAtEndCirculatList(Node* head,int data)
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
//     head=InsertAtEndCirculatList(head,5);
//     traversal(head);
//     return 0;
// }


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

Node* InsertAtEndCirculatList(Node* head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        temp->next=temp;
        return temp;
    }
    // add a temp node after head
    temp->next=head->next;
    head->next=temp;
    // swap the data of head and temp 
    int temp_data=temp->data;
    temp->data=head->data;
    head->data=temp_data;
    // now temp is new head
    return temp;
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
    head=InsertAtEndCirculatList(head,50);
    traversal(head);
    return 0;
}
