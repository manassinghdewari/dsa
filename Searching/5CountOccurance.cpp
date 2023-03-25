// in logn time

#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int low,int high,int x)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>x)
            high=mid-1;
        else if(arr[mid]<x)
            low=mid+1;
        else
        {
            if(arr[mid] != arr[mid-1] || mid==0)
                return mid;
            else
            {
                high=mid-1;
            }
        }
    }
    return -1;
}
// int firstOcc(int arr[], int low, int high, int x)
// {
//     if (low > high)
//         return -1;
//     int mid = (low + high) / 2;
//     if (arr[mid] > x)
//         return firstOcc(arr, low, mid - 1, x);
//     else if (arr[mid] < x)
//         return firstOcc(arr, mid + 1, high, x);
//     else
//     {
//         if (arr[mid] != arr[mid - 1] || mid == 0)
//             return mid;
//         else
//         {
//             return firstOcc(arr, low, mid - 1, x);
//         }
//     }
// }
int lastOccur(int arr[], int low, int high, int x, int n)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (arr[mid] != arr[mid + 1] || mid == n - 1)
                return mid;
            else
            {
                low = mid - 1;
            }
        }
    }
    return -1;
}
int countOcc(int arr[], int n, int x)
{
    int first = firstOcc(arr, 0, n - 1, x);
    cout << "first occurence" << first << "\n";
    if (first == -1)
        return 0;
    else
    {
        cout << "last occuranxce\t" << lastOccur(arr, 0, n - 1, x, n) << "\n";
        return ((lastOccur(arr, 0, n - 1, x, n) - first) + 1);
    }
}
int main()
{
    int arr[] = {10, 20, 20, 20, 40, 40};
    int count = countOcc(arr, 6, 20);
    cout << "no of time occur \t" << count << "\n";
    return 0;
}