// kth smallest elements
// time complexity is nlog(n)


#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int l, int h)
{
    int i = l-1, pivot = arr[h];
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[h],arr[i+1]);
    return i + 1;
}
int kthSmallest(int arr[], int n, int k)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int p = partition(arr, l, r);
        if (p == k - 1)
            return p;
        else if (p > k - 1)
            r = p - 1;
        else
            l = p + 1;
    }
    return -1;
}

int main()
{
    int arr[]={10,4,5,8,11,6,26};
    cout<<"\n kth smallest element"<<kthSmallest(arr,7,5)<<"\n";
    return 0;
}