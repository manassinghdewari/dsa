#include<bits/stdc++.h>
using namespace std;


void nextGreater(int arr[],int n)
{
    vector<int>v;
    stack<int>s;
    s.push(n-1);
    v.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && arr[s.top()]<=arr[i])
            s.pop();
        int nextGreater=s.empty() ? -1:arr[s.top()];
        v.push_back(nextGreater);
        s.push(i);
    }
    reverse(v.begin(),v.end());
    for(auto a:v)
        cout<<a<<" ";
}
int main()
{
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    nextGreater(arr,n);
    return 0;
}