//  merge sort algorithm

// divide and conquer algorithm

// in this first we are using mergeSort function recursively
// to divide the array into two arrays
// then we are passing left , mid, right to merge function
// as it will sort and merger the both arrays

#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1, n2 = high - mid;
    int a1[n1], a2[n2];
    for (int i = 0; i < n1; i++)
        a1[i] = arr[low + i];
    for (int i = 0; i < n2; i++)
        a2[i] = arr[mid+1+ i];

    int i = 0, j = 0, k = low;
    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
            arr[k++] = a1[i++];
        else
            arr[k++] = a2[j++];
    }
    while (i < n1)
    {
        arr[k++] = a1[i++];
    }
    while (j < n2)
    {
        arr[k++] = a2[j++];
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (r > l) // it means at least two element should be present
    {
        // int mid=(l+r)/2;
        // we can write this line as to avoid overflow
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main()
{
    int arr[] = {10,5,30,15,7};

    mergeSort(arr, 0, 4);
    // print array after sorting
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";
    return 0;
}