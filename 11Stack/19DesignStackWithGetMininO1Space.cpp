// #include<bits/stdc++.h>
// using namespace std;

// // Restricted version
// // in the restricted version of the problem we are 
// // considering only the positive values to be push into 
// // the stack

// // In this method we are maintaining a variable which is 
// // storing the current minimum value
// // 
// // to store the previous minimum we will
// // push newSmaller-previusSmaller to the stack 
// // and update the minimum variable with new minimum


// stack<int>mainStack;
// int minimum;
// void push(int x)
// {
//     if(mainStack.empty())
//     {
//         mainStack.push(x);
//         minimum=x;
//     }
//     else
//         if(minimum>=x)
//         {
//             mainStack.push(x-minimum);
//             minimum=x;
//         }
//         else
//             mainStack.push(x);
    
// }

// void pop()
// {
//     if(mainStack.empty())
//     {
//         cout<<"Stack is empty!"<<endl;
//     }
//     else
//     {
//         int temp;
//         if(mainStack.top()<=0)
//         {
//             temp=minimum;
//             minimum=minimum-mainStack.top();
//         }
//         else
//             temp=mainStack.top();
//         mainStack.pop();
//         cout<<"Popped Element is: "<<temp<<"\n";
//     }
// }

// int main()
// {
//     int input;
//     while(true)
//     {
//         cout<<"1- Push\n"<<"2- Pop\n"<<"3-GetMinimum\n"<<"4-Exit\n";
//         cin>>input;
//         switch(input)
//         {
//             case 1:
//                 cout<<"Enter the data to push\n";
//                 int data;
//                 cin>>data;
//                 push(data);
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 cout<<"Minimum is "<<minimum<<"\n";
//                 break;
//             case 4:
//                 exit(1);
//         }
//     }
//     return 0;
// }


// **********************************
// Second Method (Handles Negatives)
// **********************************


#include<bits/stdc++.h>
using namespace std;
stack<int>mainStack;
int minimum;
void push(int x)
{
    if(mainStack.empty())
    {
        minimum=x;
        mainStack.push(x);
    }
    else if(x<=minimum)
    {
        mainStack.push(2*x-minimum);
        minimum=x;
    }
    else
        mainStack.push(x);
}

void pop()
{
    int temp=mainStack.top();
    if(temp<=minimum)
    {
        cout<<"Popped Item "<<minimum<<"\n";
        minimum=2*minimum-temp;
    }
    else
        cout<<"Popped Item "<<temp<<"\n";
    mainStack.pop();
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
                cout<<"Minimum is "<<minimum<<"\n";
                break;
            case 4:
                exit(1);
        }
    }
    return 0;
}