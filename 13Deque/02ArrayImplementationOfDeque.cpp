// #include<bits/stdc++.h>
// using namespace std;

// struct Deque
// {
//     int size,cap;
//     int *arr;
//     Deque(int c)
//     {
//         cap=c;
//         size=0;
//         arr=new int [cap];
//     }

//     bool isFull()
//     {
//         return (size==cap);
//     }

//     bool isEmpty()
//     {
//         return (size==0);
//     }

//     void insertRear(int x)
//     {
//         if(isFull())
//         {
//             cout<<"\nDeque Overflow";
//             return ;
//         }
//         arr[size++]=x;
//     }

//     void deleteRear()
//     {
//         if(isEmpty())
//         {
//             cout<<"\nDeque Underflow";
//             return;
//         }
//         int temp=arr[size-1];
//         cout<<"\n Deleted Item:"<<temp;
//         size--;
//     }

//     int getRear()
//     {
//         if(isEmpty())
//         {
//             cout<<"\nDeque Underflow";
//             return -1;
//         }
//         return arr[size-1];
//     }

//     void insertFront(int x)
//     {
//         if(isFull()) 
//         {
//             cout<<"\nDeque Overflow";
//             return;
//         }
//         for(int i=size-1;i>=0;i--)
//             arr[i+1]=arr[i];
//         arr[0]=x;
//         size++;
//     }

//     void deleteFront()
//     {
//         if(isEmpty())
//         {
//             cout<<"\nDeque Undrflow";
//             return;
//         }
//         for(int i=0;i<size-1;i++)
//             arr[i]=arr[i+1];
//         size--;
//     }

//     int getFront()
//     {
//         if(isEmpty())
//         {
//             cout<<"\nDeque Underflow";
//             return -1;
//         }
//         return arr[0];
//     }
// };

// int main()
// {
//     Deque d(5);
//     int choice;
//     while(1)
//     {
//         cout<<"\n1-Is Full\n2-Is Empty\n3-InsertRear\n4-Delete Rear\n5-GetRear\n6-InsertFront\n7-Delete Front\n8-GetFront\n9-Exit\n";
//         cin>>choice;
//         int x;
//         switch(choice)
//         {
//             case 1:
//                     cout<<"\nDeque is "<<d.isFull() ? " Full":" Not Full";
//                     break;
//             case 2:
//                     cout<<"\nDeque is "<<d.isEmpty() ? " Full":" Not Full";
//                     break;
//             case 3:
//                     cin>>x;
//                     d.insertRear(x);
//                     break;
//             case 4:
//                     d.deleteRear();
//                     break;
//             case 5:
//                     cout<<"\n Rear is "<<d.getRear();
//                     break;
//             case 6:
//                     cin>>x;
//                     d.insertFront(x);
//                     break;
//             case 7:
//                     d.deleteFront();
//                     break;
//             case 8:
//                     cout<<"\n Front is "<<d.getFront();
//                     break;
//             case 9:
//                     exit(1);
//                     break;
//         }
//     }
//     return 0;
// }


// Efficient Implementation

#include<bits/stdc++.h>
using namespace std;

struct Deque
{
    int size,cap;
    int *arr;
    Deque(int c)
    {
        cap=c;
        size=0;
        arr=new int [cap];
    }

    bool isFull()
    {
        return (size==cap);
    }

    bool isEmpty()
    {
        return (size==0);
    }

    void insertRear(int x)
    {
        if(isFull())
        {
            cout<<"\nDeque Overflow";
            return ;
        }
        int new_rear=(front+size)%cap;
        arr[new_rear]=x;
        size++;
    }

    void deleteRear()
    {
        if(isEmpty())
        {
            cout<<"\nDeque Underflow";
            return;
        }
        int temp=arr[size-1];
        cout<<"\n Deleted Item:"<<temp;
        size--;
    }

    int getRear()
    {
        if(isEmpty())
        {
            cout<<"\nDeque Underflow";
            return -1;
        }
        return arr[(front+size-1)%cap];
    }

    void insertFront(int x)
    {
        if(isFull()) 
        {
            cout<<"\nDeque Overflow";
            return;
        }
        front=(front+cap-1)%cap;
        arr[front]=x;
        size++;
    }

    void deleteFront()
    {
        if(isEmpty())
        {
            cout<<"\nDeque Undrflow";
            return;
        }
        front=(front+1)%cap;
        size--;
    }

    int getFront()
    {
        if(isEmpty())
        {
            cout<<"\nDeque Underflow";
            return -1;
        }
        return arr[front];
    }
};

int main()
{
    Deque d(5);
    int choice;
    while(1)
    {
        cout<<"\n1-Is Full\n2-Is Empty\n3-InsertRear\n4-Delete Rear\n5-GetRear\n6-InsertFront\n7-Delete Front\n8-GetFront\n9-Exit\n";
        cin>>choice;
        int x;
        switch(choice)
        {
            case 1:
                    cout<<"\nDeque is "<<d.isFull() ? " Full":" Not Full";
                    break;
            case 2:
                    cout<<"\nDeque is "<<d.isEmpty() ? " Full":" Not Full";
                    break;
            case 3:
                    cin>>x;
                    d.insertRear(x);
                    break;
            case 4:
                    d.deleteRear();
                    break;
            case 5:
                    cout<<"\n Rear is "<<d.getRear();
                    break;
            case 6:
                    cin>>x;
                    d.insertFront(x);
                    break;
            case 7:
                    d.deleteFront();
                    break;
            case 8:
                    cout<<"\n Front is "<<d.getFront();
                    break;
            case 9:
                    exit(1);
                    break;
        }
    }
    return 0;
}