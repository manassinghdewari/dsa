// Selection Sort

// thetha(n^2)
// does less memory writes compared to QuickSort,MergeSort and Insertion Sort
// But cycle sort isd optimal in terms of memory writes.
// basic idea for the heap sort
// not stable
// In place

// efficient approach

#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={2,5,8,10,18,20};
    selectionSort(arr,6);
    return 0;
}

// time complexity
// (n-1)+(n-2)+----+2+1
// (n*(n-1))/2
// thetha(n^2)

// selection sort is unstable bcz if we have same elements then there may be change in order of same element.
// so for exp same element may be acc to to alphabatically sorted 
// buit it does't care 
