// Cycle Sort

// 1-> A worst case O(n^2) sorting algorithm

// 2-> Does minimum memory writes and can be useful for cases
//  where memory write is costly.

// 3->In place and Not stable

// 4->Useful to solve questions like find minimum swaps required
// to sort and array

// In this cycle sort we will count the number of elements
// smaller than the current element in the array then we will
// fix the current element acc to no of smaller elements

#include <bits/stdc++.h>
using namespace std;

void cycleSortDistinct(int arr[], int n)
{
    // we are taking till n-1 bcz it n-1 element will come in any cycle

    for (int cs = 0; cs < n - 1; cs++)
    {
        int item = arr[cs];
        int pos = cs;
        for (int i = cs + 1; i < n; i++)
            if (arr[i] < item)
                pos++;
        swap(item, arr[pos]);
        while (pos != cs)
        {
            pos = cs;
            for (int i = cs + 1; i < n; i++)
                if (arr[i] < item)
                    pos++;
            swap(arr[pos], item);
        }
    }
}

int main()
{
    int arr[] = {20, 40, 50, 10, 30}, n = 5;
    cycleSortDistinct(arr, n);
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}