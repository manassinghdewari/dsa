// subarray with zero sum

#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

bool isOSubArray(int arr[],int n)
{
    unordered_set<int> hash;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(hash.find(pre_sum) != hash.end())
            return true;
        if(pre_sum==0)
            return true;
        hash.insert(pre_sum);
    }
    return false;
}
int main()
{
    int arr[]={3,4,3,-1,1},n=5;
    int result=isOSubArray(arr,n);
    cout<<"\n Subarray is present \t"<<result<<"\n";
    return 0;
}

// time complexity O(n)