// index of the first occurrence

// efficinent code

// recursive approach

#include <bits/stdc++.h>

using namespace std;

int firstOccur(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (x > arr[mid])
        return firstOccur(arr, mid + 1, high, x);
    else if (x < arr[mid])
        return firstOccur(arr, low, mid - 1, x);
    else
    {
        if (mid == 0 || arr[mid] != arr[mid - 1])
            return mid;
        else
            return firstOccur(arr, low, mid - 1, x);
    }
}
int main()
{
    int arr[] = {10, 20, 20, 20, 30, 30, 30};
    cout << "index of element \t" << firstOccur(arr, 0, 7, 20);
    return 0;
}
