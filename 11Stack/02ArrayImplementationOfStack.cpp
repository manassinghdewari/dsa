// #include<bits/stdc++.h>
// using namespace std;

// struct MyStack
// {
//     int *arr;
//     int cap;
//     int top;
//     MyStack(int c)
//     {
//         cap=c;
//         arr=new[cap];
//         top=-1;
//     }
//     void push(int x)
//     {
//         if(top==cap-1)
//         {
//             cout<<"\nStack overflow";
//             return;
//         }
//         top++;
//         arr[top]=x;
//     }
//     int pop()
//     {
//         if(top==-1)
//             return INT_MIN;
//         int temp=arr[top];
//         top--;
//         return temp;
//     }

//     int peek()
//     {
//         if(top==-1)
//             return INT_MIN;
//         return arr[top];
//     }
//     int size()
//     {
//         return top+1;
//     }
//     bool isEmpty()
//     {
//         return (top==-1);
//     }
// }

// int main()
// {
    
//     return 0;
// }

// ********************************
// Dynamic allocation
// ********************************



#include<bits/stdc++.h>
using namespace std;

struct MyStack
{
    vector<int>v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        int res=v.back();
        v.pop_back();
        return res;
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
    int peek()
    {
        return v.back();
    }
}

int main()
{
    
    return 0;
}