// majority element

// a element said to be a majority element if it appears 
// more than n/2 times  in an array (>n/2)
// n is the size of the array

// examples

// i/p:arr[] ={8,3,4,8,8}
// o/p: 0 or 3 or 4 (any index of 8)

// i/p:arr[] ={3,7,4,7,7,5}
// o/p: -1 (no majority) bcz 7 appears exactly 3 times it
// should be more that n/2 here >3

// i/p:arr[] ={20,30,40,50,50,50,50}
// o/p: 3 or 4 or 5 or 6 (any index of 50)


// naive solution self

// #include <bits/stdc++.h>

// using namespace std;

// int  majority(int arr[],int n)
// {
//     int res=0,pos=-1;
//     for(int i=0;i<n-1;i++)
//     {
//         int c=1;int pos;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i] == arr[j])
//             {
//                 c++;
//             }
//         }
//         if(c > n/2)
//             return i;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {8,7,6,8,6,6,6,6};
//     int a = majority(arr,8);
//     cout<<"majority element index in array"<<a<<"\n";
//     return 0;
// }

// efficient solution

// this algorithm works in two steps:
// in the first step, we find the candidate elements
// in the second step we will check the condidate is 
// actually a majority or not.

#include<bits/stdc++.h>
using namespace std;
// in this algo if same element is  comming then 
// we are incrementing the count and if it is 
// not equal to then we are decrementing the count
// if count becomes 0 then we are changing the values of 
// res to i and setting count again 1. and in the next step 
// we are thinking that it is the element then
// we start working on it
int findMajority(int arr[],int n)
{
    int res=0,count=1;
    for(int i=1;i<n;i++)
    {
        if(arr[res] == arr[i])
            count++;
        else
            count--;
        if(count == 0)
        {
            res=i;
            count=1;
        }
    }
    count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[res] == arr[i])
        {
            count++;
        }
    }
    if(count <= n/2)
        res=-1;
    return res;
}

int main()
{
    int arr[]={8,8,6,6,6,4,6};
    int result=findMajority(arr,7);
    cout<<"the returned value is"<<result<<"\n";
    return 0;
}
