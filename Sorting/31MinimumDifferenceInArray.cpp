// Minimum difference between elements in array

#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n)
{
    sort(arr, arr + n);
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
        res = min(res, arr[i] - arr[i - 1]);
    return res;
}

int main()
{
    int arr[] = {10, 9, 1, 4}, n = 4;
    int answer = getMinDiff(arr, n);
    cout << "\n";
    cout << "minimum difference between elements in array \t" << answer << "\n";
    return 0;
}