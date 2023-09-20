#include<bits/stdc++.h>
using namespace std;

// Time complexity
// thetha(n)
// space thetha(n)

void printSpan(int arr[],int n)
{
    stack<int>s;
    cout<<1<<" ";
    s.push(0);
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]<arr[i])
        {
            s.pop();
        }
        int span=s.empty() ? i+1 : i-s.top();
        cout<<span<<" ";
        s.push(i);
    }

}
int main()
{
    int arr[]={60,10,20,15,35,50};
    int n=6;
    printSpan(arr,n);
    return 0;
} 