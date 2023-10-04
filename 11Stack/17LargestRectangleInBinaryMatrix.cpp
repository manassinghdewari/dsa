#include<bits/stdc++.h>
using namespace std;


vector<int> nextSmallerLeft(int arr[],int n)
{
    stack<int> s;
    vector<int> v;
    s.push(0);
    v.push_back(-1);
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
        {
            s.pop();
        }
        int nextSmaller=s.empty() ? -1: s.top();
        v.push_back(nextSmaller);
        s.push(i);
    }
    return v;
}

vector<int> nextSmallerRight(int arr[],int n)
{
    stack<int> s;
    vector<int> v;
    s.push(n-1);
    v.push_back(n);
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false && arr[s.top()]>=arr[i])
        {
            s.pop();
        }
        int nextSmaller=s.empty() ? n: s.top();
        v.push_back(nextSmaller);
        s.push(i);
    }
    reverse(v.begin(),v.end());
    return v;
}

int areaHistogram(int arr[],int n)
{
    int area=0;
    vector<int>smallerLeft=nextSmallerLeft(arr,n);
    
    vector<int>smallerRight=nextSmallerRight(arr,n);
    
    for(int i=0;i<n;i++)
    {
        int curr_area=arr[i]*(smallerRight[i]-smallerLeft[i]-1);
        area=max(area,curr_area);
    }
    return area;
}

int main()
{
    int arr[4][5]={
        {1,0,0,1,1},{0,0,0,1,1},{1,1,1,1,1},{0,1,1,1,1}};
    int row=4,col=5;
    int max_react_area=areaHistogram(arr[0],col);

    for(int i=1;i<row;i++)
    {
        int curr_area;
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==1)
                arr[i][j]+=arr[i-1][j];
        }
        
        max_react_area=max(max_react_area,areaHistogram(arr[i],col));
    }
    cout<<"\nmaximum area of reactangle: "<<max_react_area;
    return 0;
}