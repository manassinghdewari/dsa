// median of two Sorted Array

// I/p: a1[] ={10,20,30,40,50}
// a2[]={5,15,25,35,45}

// o/p: 27.5  //{5,10,15,20,25,30,40,45,50}

// I/p:a1[]={1,2,3,4,5,6}
// a2[]={10,20,30,40,50}
// o/p: 6.0 // {1,2,3,4,5,6,10,20,30,40,50}

// I/p:a1[]={10,20,30,40,50,60}
// a2[]={1,2,3,4,5}
// o/p:10.0 // {1,2,3,4,5,10,20,30,40,50,60}

// Naive  Approach
// 1-> Create an array temp[] of size (n1+n2)
// 2-> Copy elements of a1[] and a2[] to temp[]
// 3-> Sort temp[]
// 4-> if(n1+n2) is odd then return middle of temp
// 5-> else return average of middle two elements

// efficient approach
// O(log n1) where w assume that n1<=n2
// n1=5 a1[]={10,20,30,40,50,}
// n2=9 a2[]={5,15,25,35,45,55,65,75,85}

// then we will divide the a1 and a2 into two parts
//  such  that first half contains the smaller elements
// of both arra, and in the right half all the elments which are greater
// in both arrays
// let i1 is the middle of a1 array
// and i2 is the middle of second array
// and i2=[(n1+n2+1)/2]-i1 ,it will i2 values
// i2 is the begining index of 2nd half of the array
// it will handle both even and odd

// example

// n1=5 a1[]={10,20,30,40,50,}
// n2=9 a2[]={5,15,25,35,45,55,65,75,85}

// i1=2
// i2=[(n1+n2+1)/2]-i1
// =>i2= 7-2 = 5

// median of 2 sorted arrays of different sizes

// a1=[1,5,8,10,18,20]
// a2=[2,3,6,7]
// combined array will be =>[1,2,3,5,6,7,8,10,18,20]
// left half (means 6 tak)    | right half
// 1 5 from Ist array         | 8 10 18 20 (Ist array)
// 2 3 6 from 2nd array       | 7 (2nd array)
// let l1=5, l2=6
// r1=8,r2=7

// the condition must be satisfied
// IMP
// l1<r2
// l2<r1

// if l1>r2 then will shift the pointer to left to l1
// if l2>r1 then will shift the pointer to right to l2

// median will be calculated by maximum of left half and
// minimum of 2nd half divide by 2

// if we get the number of elements coming from Ist array
// then problem will get easy becz by subtracting we can get
// element from 2nd array

#include <bits/stdc++.h>
using namespace std;

float median(int arr1[], int arr2[], int n1, int n2)
{
    int l0 = 0, hi = n1, l1, l2, r1, r2;
    while (l0 <= hi)
    {
        /* code */
        int cut1 = (l0 + hi) / 2;
        int cut2 = ((n1 + n2) / 2) - cut1;
        if (cut1 == 0)
            l1 = INT_MIN;
        else
            l1 = arr1[cut1 - 1];

        if (cut2 == 0)
            l2 = INT_MIN;
        else
            l2 = arr2[cut2 - 1];
        if (cut1 == n1)
            r1 = INT_MAX;
        else
            r1 = arr1[cut1];
        if (cut2 == n2)
            r2 = INT_MAX;
        else
            r2 = arr2[cut2];

        if (l1 > r2) // it means condition not satisfied so will move high to cut1-1
            hi = cut1 - 1;
        else if (l2 > r1)
            l0 = cut1 + 1;
        else
        {
            if ((n1 + n2) % 2 == 0)
                return (max(l1, l2) + min(r1, r2)) / 2;
            else
                return min(r1, r2);
        }
    }
}
int main()
{
    // I/p:a1[]={1,2,3,4,5,6}
// a2[]={10,20,30,40,50}
    // int arr1[] = {1,2,3,4,5,6};
    // int arr2[] = {10,20,30,40,50};
    int arr1[]={1,2,3,4,5,6};
    int arr2[]={10,20,30,40,50};
    float res = median(arr1, arr2, 6, 5);
    cout << "answer is: /t" << res << "\n";
    return 0;
}
