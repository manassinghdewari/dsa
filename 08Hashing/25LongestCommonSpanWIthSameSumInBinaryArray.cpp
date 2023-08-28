// 25LongestCommonSpanWIthSameSumInBinaryArray
// it means should have same sum but also starting and 
// ending index should be same in both the array
// in this we will not replace 0 with -1 
// keep them same as it is

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int commanSpan(int arr1[],int arr2[],int n,int sum)
{
    unordered_map<int,int> map;
    int pre_sum=0,res=0, arr[n];
    for(int i=0;i<n;i++)
    {
       arr[i]=arr1[i]-arr2[i];
       pre_sum+=arr[i];
       if(pre_sum==sum)
        res=i+1;
       if(map.find(pre_sum)==map.end())
       {
        map[pre_sum]=i;
       }
       if(map.find(pre_sum-sum)!=map.end())
        res=max(res,i-map[pre_sum-sum]);
    }
    return res;
}
int main()
{
    int arr1[] = {0,1,0,0,0,0}, n = 6;
    int arr2[]={1,0,1,0,0,1};
    int res=commanSpan(arr1,arr2, n, 0);
    cout<<"\nlongest span:\t"<<res<<"\n";
    return 0;
}