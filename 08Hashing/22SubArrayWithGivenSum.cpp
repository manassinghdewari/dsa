// subarray  with given sum

#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

bool isGivenSubarray(int arr[],int n,int sum)
{
    unordered_set<int> hash;
    int pre_sum=0;
    for(int i=0;i<n;i++)
    {
        pre_sum+=arr[i];
        if(pre_sum ==sum)
            return true;
        if(hash.find(pre_sum-sum)!=hash.end())
            return true;
        hash.insert(pre_sum);
    }
    return false;
}
int main()
{
    int arr[]={3,4,3,-1,1},n=5;
    int result=isGivenSubarray(arr,n,6);
    cout<<"\n Subarray is present \t"<<result<<"\n";
    return 0;
}