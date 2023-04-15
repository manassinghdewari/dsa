// peak value:
// a no is peak value if it is grater than both of its
// left side and right side values

// i/p: arr[]={5,10,20,15,7}
// o/p:20

// i/p:arr[]={10,20,15,5,23,90,67}
// o/p:20 or 90

// i/p:arr[]={80,70,60}
// o/p: 80
// for the left corner element its right side value should be
// less than its value
// and for right corner element its left side value value
//  should be  less than its value

// i/p:arr[]={80,70,60}
// o/p:80

// #include <bits/stdc++.h>
// using namespace std;

// int peekElement(int arr[], int n)
// {
//     if (n == 1)
//         return arr[0];

//     if (arr[0] > arr[1])
//         return arr[0];
//     if (arr[n - 1] > arr[n - 2])
//         return arr[n - 1];
//     for (int i = 1; i < n - 1; i++)
//     {
//         if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
//             return arr[i];
//     }
// }
// int main()
// {
//     int arr[] = {80, 70, 60};
//     int res = peekElement(arr, 3);
//     cout << "peak element is :\t" << res << "\n";
//     return 0;
// }

// efficeient approch

// for better understanding of this algorithm
// try these exaples

// int arr[] ={5,20,40,30,20,50,60}
// int arr[] ={120,80,40,30,20,50,60}
// int arr[] ={5,10,20,40,60,70,80}

// in this algorithm we are using binary search algorithm
// first we will check if mid ==0 and arr[mid+1]<=arr[mid]  return mid or
// mid=n-1 and arr[mid-1] <=arr[mid] then return mid
// and will check arr[mid] > =arr[mid-1]
// and arr[mid] >=arr[mid+1] then return mid

// otherwise if mid>0 and arr[mid]<=arr[mid-1]
// then high=mid-1
// else low=mid+1

// second if will run until it gets a peak element
// because let arr[mid]>arr[mid-1]
// then the arr[mid-1] may be the peak
// if not then again high changes to mid-1 and so on
// then it will get a peak element

#include <bits/stdc++.h>

using namespace std;

int getAPeakElement(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (((mid == 0) || (arr[mid - 1] <= arr[mid])) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}

int main()
{
    int arr[] = {5,10,20,40,60,70,80};
    int res = getAPeakElement(arr, 7);
    cout << "then peak element is " << arr[res] << "\n";
    return 0;
}