// counting sort algorithm

// first we will count the number of occurrences of each element

// then we will count the cumulative sum
// in each index of count array now the no of elements which are equal and less than current elemeny are present
// then will make an output array of size n
// then will run loop from n-1 to 0
// so that order of the elements remain the same

// then will check the count of current element then we will store that element at count-1 position
// and will also decrement the total number of current elements

// at last we will copy the output array into arr

#include <bits/stdc++.h>
using namespace std;

// k is the maximum number present in the array

void countSort(int arr[], int n, int k)
{
    int count[k];
    for (int i = 0; i < k; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[arr[i]]++;
    for (int i = 1; i < k; i++)
        count[i] = count[i - 1] + count[i];
    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

int main()
{
    int arr[] = {5, 6, 5, 2}, n = 4, k = 7;
    countSort(arr, n, k);
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}