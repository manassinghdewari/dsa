
// ***************************************
// Method 2 (By modifying the node)
// ***************************************

// #include<bits/stdc++.h>
// using namespace std;

// struct Node
// {
//     int data;
//     bool visited=false;
//     Node *next;
//     Node(int x)
//     {
//         data=x;
//         next=NULL;
//     }
// };

// bool checkLoop(Node* head)
// {
//     if(head==NULL)  return false;
//     if(head->next==head) return true;
//     Node* curr=head;
//     while(curr!=NULL && curr->next !=NULL)
//     {
//         if(curr->next->visited)
//             return true;
//         curr->visited=true;
//         curr=curr->next;
//     }
// }

// // void printList(Node *head)
// // {
// //     cout<<"\n";
// //     while(head!=NULL)
// //     {
// //         cout<<head->data<<" ";
// //         head=head->next;
// //     }
// // }

// int main()
// {
//     Node *head=new Node(10);
//     head->next=new Node(15);
//     head->next->next=new Node(12);
//     head->next->next->next=new Node(20);
//     head->next->next->next->next=head->next;
//     // head->next->next->next->next->next=new Node(30);
//     // printList(head); 
//     bool ans=checkLoop(head);
//     if(ans)  cout<<"\n there is loop"; else cout<< " There is no loop";
//     return 0;
// }


// ***************************************
// Method 3 (Without modifying the node and maintaining a dummy pointer)
// we will change next to point a dummy node 
// so each node will point to dummy node

// when we will reach the loop at that time it will 
// be pointing to dummy node 

// but in case of another node initially it will not point to dummy node
// so we get the loop
// ***************************************



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

// bool checkLoop(Node* head)
// {
//     if(head==NULL)  return false;
//     if(head->next==head) return true;
//     Node* curr=head;
//     Node* dummy=new Node(111);
//     while(curr!=NULL && curr->next !=NULL)
//     {
//         Node* next=curr->next;
//         if(next==dummy)
//             return true;
//         curr->next=dummy;
//         curr=next;
//     }
// }

// // void printList(Node *head)
// // {
// //     cout<<"\n";
// //     while(head!=NULL)
// //     {
// //         cout<<head->data<<" ";
// //         head=head->next;
// //     }
// // }

// int main()
// {
//     Node *head=new Node(10);
//     head->next=new Node(15);
//     head->next->next=new Node(12);
//     head->next->next->next=new Node(20);
//     head->next->next->next->next=head->next;
//     // head->next->next->next->next->next=new Node(30);
//     // printList(head); 
//     bool ans=checkLoop(head);
//     if(ans)  cout<<"\n there is loop"; else cout<< " There is no loop";
//     return 0;
// }




// ***************************************

// Method 4 (Without modifying the node and without distroying the list)
// by using hash table
// ***************************************



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

bool checkLoop(Node* head)
{
    if(head==NULL)  return false;
    if(head->next==head) return true;
    Node* curr=head;
    unordered_set<Node*> s;
    while(curr!=NULL)
    {
        if(s.find(curr)!=s.end())
            return true;
        s.insert(curr);
        curr=curr->next;
    }
    return false;
}

// void printList(Node *head)
// {
//     cout<<"\n";
//     while(head!=NULL)
//     {
//         cout<<head->data<<" ";
//         head=head->next;
//     }
// }

int main()
{
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