#include<bits/stdc++.h>
using namespace std;

struct TwoStacks
{
    int *arr,cap,top1,top2;
    TwoStacks(int capacity)
    {
        cap = capacity;
        top1=-1;
        top2=capacity;
        arr=new int [cap];
    }
    void push1(int x)
    {
        if(top1<(top2-1))
        {
            top1++;
            arr[top1]=x;
        }
        else
            cout<<"Stack Overflow\n";
    }
    void push2(int x)
    {
        if((top1+1)<top2)
        {
            top2--;
            arr[top2]=x;
        }
        else
            cout<<"Stack Overflow\n";
    }
    int pop1()
    {
        if(top1!=-1)
        {
            int temp=arr[top1];
            top1--;
            return temp;
        }
        else
        {
            cout<<"Stack Underflow\n";
        }
    }

    int pop2()
    {
        if(top2!=cap)
        {
            int temp=arr[top2];
            top2++;
            return temp;
        }
        else
        {
            cout<<"Stack Underflow\n";
        }
    }
};

int main()
{
    TwoStacks s(3);
    s.push1(10);
    s.push2(30);
    cout<<s.pop1();
    s.push1(10);
    s.push1(20);
    cout<<s.pop2();
    return 0;
}