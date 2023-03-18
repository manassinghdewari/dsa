// maximum circular subarray sum
//

// {10,5,-5}

// example of maximum sum that we can get from circular subarray
// All Circular Subarrays are
// Normal[{10},{5},{-5},{10,5},{5,-5},{10,5,-5}]
// only circular [{5,-5,10},{-5,10},{-5,10,-5}]
// I/p [5,-2,3,4]
// o/p:12
// I/p [2,3,-4]
// o/p:5
// i/p:[8,-4,3,-5,4]
// o/p:12
// i/p:[-3,4,6]
// o/p:10

// i/p:[-8,7,6,-2]
// o/p:13
// i/p:[3,-4,5,6,-8,7]
// o/p:17

// Naive Solution:O(n^2)

// tracing

// (i+j)%n is used for circular travarsel
// in this case we are using (i+j)%n in 2nd loop
// in this second loop always starts from 1 and till less
// than n

// arr[]=[5,-2,3,4]
// i=0 current_max=10 res=10
// i=1 current_max=10 res=10
// i=2 current_max=12 res=12
// i=3 current_max=10

// so answer is

// #include <iostream>
// using namespace std;

// int maxCircularSum(int arr[], int n)
// {
//     int res = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int curr_max = arr[i];
//         int curr_sum = arr[i];
//         for (int j = 1; j < n; j++)
//         {
//             int index = (i + j) % n;
//             curr_sum += arr[index];
//             curr_max = max(curr_max, curr_sum);
//         }
//         res = max(curr_max, res);
//     }
//     return res;
// }

// int main()
// {
//     int arr[] = {5, -2, 3, 4};
//     int ans = maxCircularSum(arr, 4);
//     cout << "maximum value: " << ans;

//     return 0; 
// }
 



// Efficient Solution: 0(n)

// idea: Take the  maximum of the folling two
// 1-maximum sum of a normalsubarray (Easy :Kadone)
// 2=maximum sum of a circular subarray

// efficient solution O(n)

// *****************

// standard kadane algorithm

// *****************

#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// from this normalMaxSum function we are finding max
// possible subbray sum of normal array
// without circulating
int normalMaxSum(int arr[],int n)
{
    int res=arr[0],maxEnding=arr[0];
    for(int i=1;i<n;i++)
    {
        maxEnding=max(arr[i],maxEnding+arr[i]);
        res=max(maxEnding,res);
    }
    return res;
}

// example arr[] = {8,-4,3,-5,4}

// now we will find max circular by subtracting -4+3-5 from
// total sum 
// so for this first we will find the total array sum 
// then we will reverse the array element by adding a negative
// sign on each element
// now we will pass this invert arrray in the same func.

// now we are finding max_circular by array sum + normalMaxSum(arr,n)
// it is because we are finding circular sum by subtrating negative sum from total sum
// thats why it is becoming arry_sum - normalMaxSum(arr,n)
// and the value of normalMaxSum is negative so 
// it becomes arr_sum+normalMaxSum(arr,n)
// then wiil find the max (max_normal,max_circular )

// example arr[]={8,-4,3,-5,4}
// max_normal =8
// arr_sum =6

//  after inversion
// arr[]={-8,4,-3,5,-4}
// max_circular=6+6=12
// res=max(max_normal,max_circular)
// res=max(8,12)
// res=12

// arr[] = {-5,-3}
// max_normal=-3

// if we remove the condition if(max_normal < 0 )

// so arr_sum = -11
// max_circular=-11+11=0
// res=max(-3,0)=0

//  so without this condition it is giving wrong answer
int overallMaxSum(int arr[],int n)
{
    int max_normal=normalMaxSum(arr,n);
    if(max_normal < 0)
        return max_normal;
    int arr_sum = 0;
    for(int i=0;i<n;i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i];
    }
    int max_circular = arr_sum + normalMaxSum(arr,n);
    return max(max_normal,max_circular);
}
int main()
{
    int arr[]={8,-4,3,-5,4};
    int ans=overallMaxSum(arr,5);
    cout<<"overall circular subarray sum "<<ans<<"\n";
    return 0;
}


