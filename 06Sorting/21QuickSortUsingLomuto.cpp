// quick sort using Lomuto

#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h)
{
    int i=l-1,j,pivot=arr[h];
    for(j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[h],arr[i+1]);
    return i+1;
}
void qSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}

int main()
{
    int arr[]={8,4,7,9,3,10,5};
    qSort(arr,0,6);
    cout<<"Array after sorting\n";
    for (int i=0;i<7;i++)
        cout<<arr[i]<<" ";
    return 0;
}