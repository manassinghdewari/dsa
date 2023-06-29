// #include <bits/stdc++.h>
// using namespace std;
// int lastIndex(int arr[], int low, int high, int x, int n)
// {
//     if (low > high)
//         return -1;
//     int mid = (low + high) / 2;
//     if (arr[mid] > x)
//     {
//         return lastIndex(arr, low, mid-1, x, n);
//     }
//     else if (arr[mid] < x)
//     {
//         return lastIndex(arr, mid+1, high, x, n);
//     }
//     else
//     {
//         if (mid == n - 1 || arr[mid] != arr[mid + 1])
//             return mid;
//         else
//             return lastIndex(arr, mid + 1, high, x, n);
//     }
// }

// int main()
// {
//     int arr[] = {5, 10, 10, 10, 10, 20, 20};
//     cout << "index of element \t" << lastIndex(arr, 0, 7, 10, 7) << "\n";
//     return 0;
// }


// iterative solution

# include<bits/stdc++.h>

using namespace std;
int lastIndexItr(int arr[],int low,int high,int x,int n)
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
            if(arr[mid] !=arr[mid+1] || mid ==n-1)
                return mid;
            else
                low=mid+1;
        }
    }
    return -1;
}
int main()
{
     int arr[] = {5, 10, 10, 10, 10, 20, 20};
     cout << "index of element \t" << lastIndexItr(arr, 0, 7, 20, 7) << "\n";
    return 0;
}
