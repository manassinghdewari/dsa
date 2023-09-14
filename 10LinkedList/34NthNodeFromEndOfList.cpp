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

// void printNthFromLastList(Node* head,int pos)
// {
//     if(head==NULL)  return;
//     Node* curr=head;
//     int count=0;
//     while(curr!=NULL)
//     {
//         count++;
//         curr=curr->next;
//     }
//     if(count<pos)   return;
//     curr=head;
//     while(curr!=NULL)
//     {
//         if(count==pos)
//         {
//             cout<<"\n Element "<<curr->data; 
//             break;
//         }
//         curr=curr->next;
//         count--;
//     }
// }
// int main()
// {
//     Node *head=new Node(10);
//     head->next=new Node(20);
//     head->next->next=new Node(30);
//     // head->next->next->next=new Node(40);
//     // head->next->next->next->next=new Node(50);
//     // head->next->next->next->next->next=new Node(30);
//     printNthFromLastList(head,1);  
//     return 0;
// }


// ******************************************
// Efficient approch using two pointer
// ******************************************
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

// Efficient Approch
// there will be two pointer 
// "first" and "second"
// 1-> Move "first" to N position ahead
// 2-> start "second" from head
// 3-> Move first and second by equal speed
// when first reaches null then "second" reaches the 
// required node 
void printNthFromLastList(Node* head,int pos)
{
    if(head==NULL)  return;
    Node* first=head;
    Node* second=head;
    for(int i=0;i<pos;i++)
    {
        if(first==NULL)
            return;
        first=first->next;
    }
    while(first!=NULL)
    {
        first=first->next;
        second=second->next;
    }
    cout<<"\nelement found "<<second->data;
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    // head->next->next->next->next->next=new Node(30);
    printNthFromLastList(head,8);  
    return 0;
}