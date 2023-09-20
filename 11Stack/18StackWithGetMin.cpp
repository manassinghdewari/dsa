#include<bits/stdc++.h>
using namespace std;


stack<int>mainStack;
stack<int>auxStack;
void push(int x)
{
    if(mainStack.empty() && auxStack.empty())
    {
        auxStack.push(x);
    }
    else
    {
        if(auxStack.top()>=x)
            auxStack.push(x);
    }
    mainStack.push(x);
}

void pop()
{
    if(mainStack.empty())
        cout<<"Stack underflow!"<<endl;
    else
    {
        if(mainStack.top()==auxStack.top())
            auxStack.pop();
        int temp=mainStack.top();
        mainStack.pop();
        cout<<"Popped Item: "<<temp<<endl;
    }
}
int main()
{
    int input;
    while(true)
    {
        cout<<"1- Push\n"<<"2- Pop\n"<<"3-GetMinimum\n"<<"4-Exit\n";
        cin>>input;
        switch(input)
        {
            case 1:
                cout<<"Enter the data to push\n";
                int data;
                cin>>data;
                push(data);
                break;
            case 2:
                pop();
                break;
            case 3:
                cout<<"Minimum is "<<auxStack.top()<<"\n";
                break;
            case 4:
                exit(1);
        }
    }

    return 0;
}