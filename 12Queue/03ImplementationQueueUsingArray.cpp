// #include<bits/stdc++.h>
// using namespace std;

// struct Queue
// {
//     int size,cap;
//     int *arr;
//     Queue(int c)
//     {
//         cap=c;
//         size=0;
//         arr=new int[cap];
//     }
//     void enque(int x)
//     {
//         if(isFull())
//         {
//             cout<<"\nQueue Overflow:";
//             return;
//         }
//         arr[size]=x;
//         size++;
//     }
//     void deque()
//     {
//         if(isEmpty())   
//         {
//             cout<<"\nQueue Underflow:";
//             return;
//         }
//         for(int i=0;i<size-1;i++)
//             arr[i]=arr[i+1];
//         size--;
//     }

//     int getFront()
//     {
//         return (isEmpty() ? -1 : 0);
//     }
//     int getRear()
//     {
//         return (isEmpty() ? -1 : size-1);
//     }
//     bool isFull()
//     {
//         return size==cap;   
//     }
//     bool isEmpty()
//     {
//         return size==0;
//     }
//     int size()
//     {
//         return size;
//     }
// }

// int main()
// {
    
//     return 0;
// }


// Effficient solutiion

#include<bits/stdc++.h>
using namespace std;

struct Queue
{
    int *arr;
    int front,rear,cap;
    Queue(int c)
    {
        front=0;
        rear=0;
        cap=c;
        size=0;
    }
    bool isFull()
    {
        return cap==size;
    }

    bool isEmpty()
    {
        return size==0;
    }

    int getFront()
    {
        if(isEmpty())
            return -1;
        else
            return (front+size-1)%cap;
    }

    void enque(int x)
    {
        if(isFull())
        {
            cout<<"\nOverflow Queue";
            return;
        }
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }

    void deque()
    {
        if(isEmpty())
        {
            cout<<"\n Queue Underflow";
            return;
        }
        front=(front+1)%cap;
        size--;
    }
};


int main()
{
    
    return 0;
}