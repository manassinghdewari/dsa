// Lomuto Partition

// in this approch
// for ease case
// we are assuming that last element of the array is pivot
// approch will be like fist i =low-1
// then we iterate over the elements of the array
// by using j
// if we find the element that is less than pivot then
// then will increment the value of i then swap(arr[i],arr[j])

// at last we swap the last element which is pivot
// position of pivot will i+1(means starting index of right windodw)
// where elements greater than pivot will be present


// sample example

// arr[10,80,30,90,40,50,70]
// l=0,i=-1,h=6,pivot=70

// i=0,j=0
// [10,80,30,90,40,50,70]

// i=0,j=1
// [10,80,30,90,40,50,70]   //remain same element is grater than pivot

// i=0,j=2
// i=1  [10,30,80,90,40,50,70]

// i=1 j=3
// [10,30,80,90,40,50,70]

// i=1 j=4
// i=2 [10,30,40,90,80,50,70]

// i=2 j=5
// i=3 [10,30,40,50,80,90,70]

// now i=0 j=6
// we npw  do swap(arr[i+1],arr[h])
// return i+1

// how to handle the cases when pivot is not the last element 
// till now we assume that pivot is last element  so we have 
// pivot index and we will replace with last element
// now we have pivot at last we simply apply Lomuto partition
// program is at last

// it is better then naive approch bcz it only does one 
//iteration of array

// #include <bits/stdc++.h>

// using namespace std;

// int lPartition(int arr[], int l, int h)
// {
    
//     int pivot = arr[h];
//     int i = l - 1;
//     for (int j = l; j <= h-1; j++)
//     {
//         if (arr[j] < pivot)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[h]);
//     return i + 1;
// }

// int main()
// {
//     int arr[]={10,80,30,90,40,50,70};
//     int pivotIndex=lPartition(arr,0,6);
//     cout<<"\npivot index -> "<<pivotIndex<<"\n";
//     return 0;
// }


// corner cases
// first corner case
// if pivot is smaller then all the elements

// [70,60,80,40,30]
// i=-1 pivot=30
// for loop will run but nothing happen
// so after all iteration will do i+1
// that is 0 we will swap(arr[0],arr[h])
// so will get [30,60,80,40,70]


// second corner case
// all the elements are smaller than pivot

// [30,40,20,50,80]
// i=1 pivot=80
// in this case all elemnts will be replace with itself 
// also pivot


// how to handle the cases when pivot is not the last element 
// till now we assume that pivot is last element  so we have 
// pivot index and we will replace with last element
// now we have pivot at last we simply apply Lomuto partition

#include <bits/stdc++.h>

using namespace std;

void lPartition(int arr[], int l, int h,int pivotIndex)
{
    swap(arr[pivotIndex],arr[h]);
    int pivot = arr[h];
    int i = l - 1;
    for (int j = l; j <= h-1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    
    // print the array 
    cout<<"\n";
    for(int i=l;i<=h;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr[]={10,80,30,90,40,50,70};
    lPartition(arr,0,6,3);
    return 0;
}
