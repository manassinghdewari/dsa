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

struct MyStack
{
    Node* head;
    int size;
    MyStack(int x)
    {
        head=NULL;
        size=0;
    }
    void push(int x)
    {
        Node* temp=new Node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    int pop()
    {
        if(head==NULL)
            return INT_MAX;
        int data=head->data;
        Node* temp=head;
        head=head->next;
        delete(temp);
        size--;
        return data;
    }
    int size()
    {
        return size;
    }
    bool isEmpty()
    {
        return (head==NULL);
    }
    int peek()
    {
        if(head==NULL)
            return INT_MAX;
        return head->data;
    }
}
int main()
{
    
    return 0;
}