
// Insertion Sort

// 1-> O(n^2) worst case
// 2->In-place and stable
// used in practise for small arrays(TimSort and IntraSort)
// O(n) is the best case

// exp
// I/p  [20,5,40,60,10,30] i=1 j=0 key=5
// [5,20,40,60,10,30] i=2 j=1,0 key=40
// [5,20,40,60,10,30] i=3 j=2,1,0 key=60
// [5,20,40,60,10,30] i=4 j=3,2,1,0 key=10
// [5,10,20,40,60,30] i=5 j=4,3,2,1,0 key=30
// [5,10,20,30,40,60]

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int arr[] = {20, 5, 40, 60, 10, 30};
    insertionSort(arr, 6);
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";
    return 0;
}

// bese case : already sorted
// [10,20,30,50] thetha(n) in this case it will not inside the while looop

// worst case : Reverse Sorted
// [50,30,20,10] thetha(m^2) we are doing max moves 

