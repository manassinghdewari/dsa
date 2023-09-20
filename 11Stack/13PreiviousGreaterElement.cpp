#include<bits/stdc++.h>
using namespace std;

void printPreviousGreater(int arr[],int n)
{
    stack<int>s;
    s.push(0);
    cout<<-1<<" ";
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]<arr[i])
        {
            s.pop();
        }
        int leftGreater= (s.empty() ? -1 : arr[s.top()]);
        cout<<leftGreater<<" ";
        s.push(i);
    }
}

int main()
{
    int arr[]={15,10,18,12,4,6,2,8};
    int n=8;
    printPreviousGreater(arr,n);
    return 0;
}