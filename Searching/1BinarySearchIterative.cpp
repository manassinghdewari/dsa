
// binary search

#include <bits/stdc++.h>

using namespace std;

int bSearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{
    int arr[] = {1, 20, 33, 45, 51};
    int res = bSearch(arr, 5, 51);
    cout << "value is present:: \t" << res << "\n";

    return 0;
}