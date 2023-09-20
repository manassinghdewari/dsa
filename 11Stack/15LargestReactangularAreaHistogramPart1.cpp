#include<bits/stdc++.h>
using namespace std;

vector<int> previousSmaller(int arr[],int n)
{
    stack<int>s;
    vector<int>ps;
    s.push(0);
    ps.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
            s.pop();
        int ps_index=s.empty()==true ? -1 : s.top();
        ps.push_back(ps_index);
        s.push(i);
    }
    return ps;
}

vector<int> nextSmaller(int arr[],int n)
{
    stack<int>s;
    vector<int>ps;
    s.push(n-1);
    ps.push_back(n);
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
            s.pop();
        int ps_index=s.empty()==true ? n : s.top();
        ps.push_back(ps_index);
        s.push(i);
    }
    reverse(ps.begin(),ps.end());
    return ps;   
}

int largestHistogramArea(int arr[],int n)
{
    int res=0;
    vector<int> ps=previousSmaller(arr,n);
    vector<int> ns=nextSmaller(arr,n);
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        int curr=arr[i];
        curr+=(i-ps[i]-1)*arr[i];
        curr+=(ns[i]-i-1)*arr[i];
        res=max(res,curr);
    }
    return res;
}
int main()
{
    int arr[]={6,2,5,4,1,5,6};
    int n=7;
    int area= largestHistogramArea(arr,n);   
    cout<<"\nLargest Area "<<area; 
    return 0;
}