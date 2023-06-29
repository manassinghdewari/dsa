// two pointer approach

//  given an unsorted array and a number x , we need to find
// if there is a pair in the array with sum euals to x

// exaples

// exep:int arr[]={3,5,9,2,8,10,11}
// x=17
// o/p :Yes

// exep:int arr[]={8,4,6}
// x=11
// o/p :No

// in this algorithm we have two pointers initially one
// pointer points to the first element and the second
// pointer points to the second element

// then we will calculate sum of the values of current
// pos of the both the pointer

// if sum of theier values is less than given sum
// in this case we will increment the first pointer by one
// if the sum is greater than the given sum then the
// we will decrement the second pointer by one position

// exaples
// i/p: int arr[] ={2,5,8,12,30}
// x=17 (given sum)
// here for easier p1 is pointer 1 and p2 is poiter 2
// first p1 at 0 and p2 at 4 and sum=32
// sum > x
// so decrement the p2 by one
// p1=0 and p2=3 and sum=14
// sum<x
// so p1=1
// so now p1=1 and p2=3 sum=17
// now they are equal so answer is YES

// same applyu for all the examples

// exp2 :
// i/p:arr[]={3,8,13,18}
// x=14
// o/p:No

// exp3:
// i/p:arr[] = {2,4,8,9,11,12,20,30}
// x=23

// p1=0 and p2=7 and sum=32
// sum >x so p2=6
// p1=0 and p2=6 and sum=22
// sum <x so p1= 1
// p1=1 and p2 =6 and sum=16
// sum <x so p1=2
// p1=2 and p2=6 and sum=20
// sum <x so p1=3
// p1=3 and p2=6 and sum=29
// sum>x p2=5
// p1=3 and p2=5 and sum=21
// sum<x so p1=4
// p1=4 and p2=5 and sum=23
// sum==x so answer is yes

// inspecting
// when p1 is at 2 p1 value=8 and p2 at 5 ,p2 value is 12
// sum=20
// so here we are ignoring 8 bcz 8 can't make sum with
// lesser value than 12 , bcx sum will be less (8+11=19)
// and 8 can't make sum with higher value than 12 bcz
// elements before 8 are smaller then 8 when they were
// combining at that sum was more then given sum
// that's why we ignored higher values
// bcz if 8 will combine with them then result sum will be
// more higher value

// #include <bits/stdc++.h>
// using namespace std;

// bool isPair(int arr[], int n, int x)
// {
//     int left = 0, right = n - 1;
//     // left <right  bcz pair shold be there if same then that
//     // is not a pair
//     while (left < right)
//     {
//         if (arr[left] + arr[right] == x)
//             return true;
//         else if (arr[left] + arr[right] > x)
//             right--;
//         else
//             left++;
//     }
//     return false;
// }
// int main()
// {
//     int arr[] = {3,8,13,18};
//     cout << "pair found \t" << isPair(arr, 4, 14);
//     return 0;
// }

// given a sorted array and a sum if there is a triplet with
// given sum

// naive approach
// #include<bits/stdc++.h>
// using namespace std;

// bool isTriplet(int a[],int n,int x)
// {
//     for(int i=0;i<n;i++)
//         for(int j=i+1;j<n;j++)
//             for(int k=j+1;k<n;k++)
//                 if(a[i]+a[j]+a[k] == x)
//                 {
//                     cout<<a[i]+a[j]+a[k]<<"\n";
//                     return true;
//                 }
//     return false;
// }
// int main()
// {
//     int arr[]={2,3,4,8,9,20,40};
//     cout<<"triplet exist \t"<<isTriplet(arr,7,30)<<"\n";
//     return 0;
// }

// efficient approach

// O(n^2)

// for efficinent approch first we will run a loop
// from i=0 to i<n
// then we will run isPair function to find the pair who has
// the sum of x-a[i]

#include <bits/stdc++.h>
using namespace std;
bool isPair(int a[], int first, int n, int x)
{
    int second = n - 1;
    while (first < second)
    {
        if (a[first] + a[second] == x)
            return true;
        else if (a[first] + a[second] > x)
            second--;
        else
            first++;
    }
    return false;
}
bool isTriplet(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        // we are passing i+1 bcz index starts from
        // next element from current
        // n-1 bcz size has been decreses by one
        // x-a[i] means remaing sum bcz we are assuming
        // current element as 3 element of answer
        if (isPair(arr, i + 1, n - 1, x - arr[i]))
            return true;
    }
    return false;
}
    int main()
    {
        int arr[]={2,3,4,8,9,20,40};
        cout<<"triplet exists \t"<<isTriplet(arr,7,10);
        return 0;
    }