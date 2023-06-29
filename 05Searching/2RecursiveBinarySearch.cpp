#include <bits/stdc++.h>
using namespace std;

int bSearch(int a[], int low, int high, int x)
{
    int mid = (low + high) / 2;
    if (a[mid] == x)
        return mid;
    if (low > high)
        return -1;
    if (a[mid] > x)
        return bSearch(a, low, mid - 1, x);
    else
        return bSearch(a, mid + 1, high, x);
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int res = bSearch(arr, 0, 5, 330);
    (res == 1) ? cout << "element is present"
               : cout << "Element is not present";
    return 0;
}