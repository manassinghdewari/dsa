// sorted roteted array meand
// array was sorted but we rotated number of times

// this array is rotated 2 times
// I/P: int arr[]={10,20,30,40,50,8,9}
// x=30
// o/p : 2

// I/P:arr[] ={100,200,300,10,20}
// x=40
// o/p:-1

// efficent approach we have to traverse half of the array

// so in this case it is always true that any one of half
// will be sorted either it will be left half or right half

// so if arr[0] < arr[mid] it means that left half is sorted
// then if x is exist between 0 and mid then will transverse
// on left half otherwise transverse on the right half

// I/P:arr[] ={100,200,500,1000,2000,10,20}
// x=100
// so 100 is present between first half so will go for it

// if x=25
// then will transverse on right half

// int arr[]={100,500,10,20,30,40,50}
// x=40
// so here arr[0] > arr[mid] so it means right half
// is sorted so will go to right half bcz it lies between
// the right half

// if in the above case x=500
// then 500 does not lies in the right half
// so will go to left half

// arr[]={100,200,300,400,20,30,40}
// x=50
// in this case both half are sorted
// so will check where it lies
// 50 can't be in the left half
// so will go to right half

#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[low] < arr[mid]) // left half sorted
        {
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else // right half sorted
        {
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {100, 200, 300, 400, 20, 30, 40};
    int res = search(arr, 7, 20);
    cout << "element is present at position \t" << res << "\n";
    return 0;
}