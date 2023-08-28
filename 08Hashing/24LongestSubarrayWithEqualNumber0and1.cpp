// we will replace the 0 with -1 
// then this problem will become like find longest subaaray with given sum=0

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void longestSubarray(int arr[],int sum,int n)
{
    unordered_map<int,int> map;
    int prefix_sum=0,res=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            prefix_sum+=-1;
        else
            prefix_sum+=arr[i];
        if(prefix_sum ==sum)
            res=i+1;
        if(map.find(prefix_sum)==map.end())
            map[prefix_sum]=i;
        if(map.find(prefix_sum-sum)!=map.end())
            res=max(res,i-map[prefix_sum-sum]);
    }
    cout<<"\nlongest subarray length: "<<res<<endl;
}
int main()
{
    int arr[]={1,0,1,1,1,0,0},n=7;
    longestSubarray(arr,0,n);
    return 0;

}