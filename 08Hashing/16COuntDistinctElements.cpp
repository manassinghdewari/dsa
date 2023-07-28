// Distinct elements in the array

// TC=O(n)
// SC=O(n)

#include<iostream>
#include<unordered_set>
using namespace std;

int countDistinctElements(int arr[],int n)
{
    // unordered_set<int>s;
    // for(int i=0;i<n;i++)
    //     s.insert(arr[i]);
    // return s.size();

    // imporoved
    unordered_set<int>s(arr,arr+n);
    return s.size();
}
int main()
{
    int arr[]={10,20,10,20,30};
    int ans=countDistinctElements(arr,5);
    cout<<"distinct elements\t"<<ans;
    return 0;
}