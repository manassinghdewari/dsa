#include <bits/stdc++.h>
#include<unordered_set>
using namespace std;

// in this approch we will check sum-arr[i] is present 
// if it is present then we will return true
// if not then we will insert the arr[i] into the array
// bcz in the future traverse it can make the pair with new 
// element

bool isPair(int arr[],int n,int sum)
{
    unordered_set<int> s;
    for(int i = 0; i < n; i++)
    {
        if(s.find(sum-arr[i])!=s.end())
            return true;
        else
            s.insert(arr[i]);
    }
    return false;
}
int main()
{
    // int arr[]={3,2,8,15,-8};
    int arr[]={11,5,6};
    int sum=10;
    bool ans=isPair(arr,3,sum);
    cout<<"pair is present \t"<<ans;
    return 0;
}