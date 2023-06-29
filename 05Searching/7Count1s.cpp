// count 1s in a sorted binary array
// i/p:arr[]={0,0,0,1,1,1,1}
// o/p:4
// arr[]={1,1,1,1,1}
// o/p:5
// arr[]={0,0,0,0}
// o/p:0

// it can be solved by finding first occurrence of of 1 and subtract it
// from size of the array

#include <bits/stdc++.h>
using namespace std;

int firstOccurOne(int arr[], int n)
{
    int low=0,high=n-1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < 1)
        {
            low = mid + 1;
        }
        else
        {
            if (arr[mid - 1]==0 || mid == 0)
                return n-mid;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {0,0,0,1,1,1,1};
    if (firstOccurOne(arr, 7)==-1)
        cout << "number of times 1's occur= " << 0 << "\n";
    else
        cout << "number of times 1's occur= " << firstOccurOne(arr,7) << "\n";
    return 0;
}