// count sort works in O(n+k ) time complexity
// but if value of k is too hogh like N^2
// then it will take O(n^2) time

// Radix sort linear time complexity even fot larger range

// it use counting sort as an subroutine

// it is not comparison based algorithm

#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n, int exp)
{
    int count[10], output[n];
    for (int i = 0; i < 10; i++)
        count[i] = 0;
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for (int i = 1; i < 10; i++)
        count[i] = count[i] + count[i - 1];
    // cout << "\n";
    // for (int i = 0; i < n; i++)
    //     cout << count[i] << " ";
    // cout << "\n";

    for (int i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
   
}

void radixSort(int arr[], int n)
{
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
        mx = max(mx, arr[i]);
    for (int exp = 1; mx / exp > 0; exp = exp * 10)
        countSort(arr, n, exp);
}
int main()
{
    int arr[] = {319, 212, 6, 8, 100, 50}, n = 6;
    radixSort(arr, n);
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
