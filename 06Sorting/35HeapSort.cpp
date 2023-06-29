// Heap Sort

// Step 1-> Build a Max Heap
// Step 2-> Repeatedly swap a root with last node ,reduce heap size by one and heapify

#include<bits/stdc++.h>
using namespace std;

void maxHeapify(int arr[],int n,int i)
{
    int largest=i,left=2*i+1,right=2*i+2;
    if(left<n && arr[largest]<arr[left])
        largest=left;
    if(right<n && arr[largest]<arr[right])
        largest=right;
    if(largest !=i)  //it means if largest does not changes then don't do anything
    {
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }
}

void buildHeap(int arr[],int n)
{
    for(int i=(n-2)/2;i>=0;i--)
    {
        maxHeapify(arr,n,i);
    }
}

void heapSort(int arr[],int n)
{
    buildHeap(arr,n);
    for(int i=n-1;i>=1;i--)
    {
        swap(arr[0],arr[i]);
        maxHeapify(arr,i,0);
    }
}
int main()
{
    int arr[]={60,55,5,4,20},n=5;
    heapSort(arr,n);
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}