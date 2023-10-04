#include<bits/stdc++.h>
using namespace std;

vector<int> nextSmallerLeft(int arr[],int n)
{
    stack<int> s;
    vector<int>v;
    s.push(0);
    v.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]>arr[i])
        {
            s.pop();
        }
        int leftSmaller= s.empty() ? -1 : s.top();
        v.push_back(leftSmaller);
        s.push(i);
    }
    return v;
}

vector<int> nextSmallerRight(int arr[],int n)
{
    stack<int> s;
    vector<int>v;
    s.push(n-1);
    v.push_back(n);
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && arr[s.top()]>arr[i])
        {
            s.pop();
        }
        int rightSmaller= s.empty() ? n : s.top();
        v.push_back(rightSmaller);
        s.push(i);
    }
    reverse(v.begin(),v.end());
    return v;
}
int areaHistogram(int arr[],int n)
{
    int area=0;
    vector<int> NSL=nextSmallerLeft(arr,n);
    vector<int>NSR=nextSmallerRight(arr,n);
    for(int i=0;i<n;i++)
    {
        int curr_area=arr[i]*(NSR[i]-NSL[i]-1);
        area=max(area,curr_area);
    }
    return area;
}
int main()
{
    int arr[]={6,2,5,4,5,1,6};
    int n=7;
    int area=areaHistogram(arr,n);
    cout<<"\nArea histogram "<<area;
    return 0;
}