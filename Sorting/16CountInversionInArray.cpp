// A pair (arr[i],arr[j]) forms an inversion 
// when i<j
// and arr[i] > arr[j]


// I/p:[2,4,1,3,5]
// O/p:3
// (2,1),(4,1),(4,3)

// I/p:[10,20,30,40]
// O/p:0

// I/p:[40,30,20,10]
// O/p:
// (40,30),(40,20),(40,10),(30,20),(30,10),(20,10)


// naive solution
// int countInversions(int arr[],int n)
// {
//     int res=0;
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]>arr[j])
//                 res++;
//         }
//     }
//     return res;
// }


// efficient  apporoach

// time complexity  O(nlog(n))


// we  will divide the array in  the 2 part from the mid

// mid=(l+r)/2
// every inversion (x,y) where x>y has posibilities
// 1->both x AND Y lies in the left half
// 2-> both x and y are in right half
// 3->x is in left half and y is in right half

// countInv is doing 1st and 2nd task
// count and merge is doing 3rd task

#include<bits/stdc++.h>
using namespace std;
int countAndMerge(int arr[],int l,int m,int r)
{
    int n1=m-l+1,n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[m+1+i];
    }
    int res=0,i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(left[i]<right[j])
        {
            arr[k]=left[i++];
        }
        else
        {
            arr[k]=right[j++];
            res=res+(n1-i);
        }
        k++;
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }
    return res;
}
int countInv(int arr[],int l,int r)
{
    int res=0;
    if(l<r)
    {
        int m=l+(r-l)/2;
        res+=countInv(arr,l,m);
        res+=countInv(arr,m+1,r);
        res+=countAndMerge(arr,l,m,r);
    }
    return res;
}
int main()
{
   int a[]={2,5,8,11,3,6,9,13};
   int ans=countInv(a,0,7);
   cout<<"answer is:"<<ans;
    return 0;
}