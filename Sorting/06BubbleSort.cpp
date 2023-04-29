// Bubble Sort
// in the bubble sort we compare a[i] with a[i+1] if a[i] is greater than a[i+1] then we swap the videos

// int arr[]={2,10,8,7}

// Ist pass

// [2,10,8,7]
// [2,10,8,7]
// [2,8,10,7]
// [2,8,7,10]

// max reaches to last position

// IInd Pass
// [2,8,7,10]
// [2,7,8,10]
// [2,7,8,10]

// now second maximum elements reaches to its final position

// [2,7,8,10]
// [2,7,8,10]
// now third max elements reaches to its final position

// #include <bits/stdc++.h>
// using namespace std;

// void bubbleSort(int *arr, int n)
// {
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < (n - i - 1); j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 swap(arr[j], arr[j + 1]);
//             }
//         }
//     }
// cout << "array after sorting\n";
// for (int i = 0; i < n; i++)
//     cout << arr[i] << "\t";
// }

// int main()
// {
//     // int arr[] = {2, 10, 8, 7};
//     int arr[] = {10, 8, 20, 5};
//     bubbleSort(arr, 4);
//     cout<<"array after sorting\n";
//     for(int i :arr)
//         cout<<i<<"\t";
//     return 0;
// }

// as for optimizing the bubble sort
// we can add check
// bcz if the array is sorted  the also it will take n^2 time
// so to avoid this we will add a check

// if any iteration swapping did't happen it means array is sorted


#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *arr, int n)
{
    int swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    // int arr[] = {2, 10, 8, 7};
    int arr[] = {10, 8, 20, 5};
    bubbleSort(arr, 4);
    cout << "array after sorting\n";
    for (int i : arr)
        cout << i << "\t";
    return 0;
}


// bubble sort never changes the order of the equal elements
// so that it is stable sort and it also inplace bcz it does't 
// need extra space for copying the elements it uses the
// same array 
