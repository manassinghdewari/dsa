// HoarePartition

// [5,3,8,4,2,7,1,10]
// l=0,pivot=5 ,i=-1,j=8
// [5,3,8,4,2,7,1,10]

// i=0 j=6
// [1,3,8,4,2,7,5,10]

// i=2,j=4
// [1,3,2,4,8,7,5,10]

// i=4 ,j= 3
//  now i>=j so it will return j

// it is not stable algorithm

#include <bits/stdc++.h>

using namespace std;

// this function will return the index, and the right of index all the elements are grater than pivot
// that is left most element
int partition(int arr[], int l, int h)
{
    int pivot = arr[l]; // we are assuming pivot is left most element
    int i = l - 1, j = h + 1;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < pivot);
        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}
int main()
{
    int arr[] = {5,3,8,4,2,7,1,10};
    int index = partition(arr, 0, 7);
    cout << "index" << index << "\n";
    cout << "Array after sorting\n";
    for (int i = 0; i < 8; i++)
        cout << arr[i] << " ";
    return 0;
}