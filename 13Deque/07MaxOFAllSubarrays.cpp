#include<bits/stdc++.h>
using namespace std;

void printKMax(int arr[],int n,int k)
{
    deque<int>dq;
    for(int i=0;i<k;i++)
    {
        while(!dq.empty() && arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    for(int i=k;i<n;i++)
    {
        cout<<arr[dq.front()]<<" ";
        while(!dq.empty()&& dq.front()<=i-k)
            dq.pop_front();
        while(!dq.empty() && arr[i]>=arr[dq.back()])
            dq.pop_back();
        dq.push_back(i);
    }
    cout<<arr[dq.front()]<<" ";
}

int main()
{
    int arr[]={20,40,30,10,60};
    printKMax(arr,5,3);
    return 0;
}

// Time complexity

// we are doing operation for each input exactly two times
// once for insertion and once for deletion
// so overall time complexity is 2n that is O(n)
