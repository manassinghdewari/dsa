// we have m children we have to distribute chocolate such that 
// diffrence between minimum and maximum is the smallest

#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int n,int m)
{
    if(m>n) return -1;
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=1;i+m-1<n;i++)
        res=min(res,arr[i+m-1]-arr[i]);
    return res;
}

int main()
{
    int arr[]={7,3,2,4,9,12,56};
    cout<<"\n minimum difference"<<minDiff(arr,7,3)<<"\n";
}