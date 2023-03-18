// window sliding technique

// given a array of integer and a  number k, find the maximum
// sum of k consecutive elements

// i/p:arr[]={1,8,30,-5,20,7}
// k=3

// solution:
// 1+8+30=39
// 8+30+(-5)=33
// 30-5+20=45
// -5+20+7=22
// o/p:45

// i/p: arr[]={5,-10,6,90,3}
// k=2
// solution:
// 5-10=-5
// -10+6=-4
// 6+90=96
// 90+3=93

// #include<bits/stdc++.h>

// using namespace std;
// int max_sum(int arr[],int n,int k)
// {
//     int max_sum=0;
//     for(int i=0;i<n-k+1;i++)
//     {
//         int sum=0;
//         for(int j=0;j<k;j++)
//             sum+=arr[i+j];
//         max_sum=max(sum,max_sum);
//     }
//     return max_sum;
// }
// int main()
// {
//     int arr[]={1,8,30,-5,20,7};
//     int res=max_sum(arr,6,3);
//     cout<<"sliding window tehnique"<<res<<"\n";
//     return 0;
// }

// time complexity [O(n-k)* k]

// efficient solution
// in this efficient approach we will first find
// the sum of the first k elements by running a loop
// from 0 to k-1
// then we will run a loop from k  to n-1
// then we will add arr[i] to curr_Sum
// and also subtract arr[i-k] from curr_sum
// then will compare it with max_sum
// accordingly will get result
// basically we are subtracting the first element and adding new
// elements because we can only add k elements
// #include<bits/stdc++.h>
// using namespace std;

// int max_sum(int arr[],int n,int k)
// {
//     int curr_sum=0;
//     this loop is for finding first k elements sum
//     for(int i=0;i<k;i++)
//     {
//         curr_sum +=arr[i];
//     }
//      now we have stored sum in max_sum
//     int max_sum=curr_sum;
//      now we will add next element and subtract initial value
//     for(int i=k;i<n;i++)
//     {
//         curr_sum +=(arr[i]-arr[i-k]);
//         max_sum=max(curr_sum,max_sum);
//     }
//     return max_sum;
// }
// int main()
// {
//     int arr[]={1,8,30,-5,20,7};
//     int ans=max_sum(arr,6,3);
//     cout<<"the max consecutive kth sum"<<ans<<"\n";
//     return 0;
// }

// another problem based on the above
// given an unsorted array of non-negative integers.
// find if there is a subarray with given suum.

// i/p: arr[]={1,4,20,3,10,5}
// sum=33
// o/p:yes

// i/p:arr[]={1,4,0,0,3,10,5}
// sum=7
// o/p:yes

// i/p:arr[]={2,4}
// sum=3
// o/p:no

// naive solution

// #include<bits/stdc++.h>

// using namespace std;

// bool isGivenSum(int arr[],int n,int givensum)
// {
//     for(int i=0;i<n;i++)
//     {
//         int sum=0;
//         for(int j=i;j<n;j++)
//         {
//             sum += arr[j];
//             if(sum==givensum)
//                 return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[]={1,4,20,3,10,5};
//     bool res=isGivenSum(arr,6,33);
//     cout<<"is present sum"<<res<<"\n";
//     return 0;
// }

// O[n] solution

// it is nothing but we are adding element until sum is greater
// than given sum
// then we will subtract the element from starting
// then process continues until we get the result
// at last we have return cur_sum==sum because
// there may be a case where we get the result by adding
// last element but we can't return result bcz loop will
// not go inside.
// so that we are returnig that value

// #include<bits/stdc++.h>

// using namespace std;

// bool isSubSum(int arr[],int n,int sum)
// {
//     int curr_sum=arr[0],s=0;
//     for(int e=1;e<n;e++)
//     {
//         // clean the prev window
//         while(curr_sum>sum && s<e-1)
//         {
//             curr_sum -=arr[s];
//             s++;
//         }
//         if(curr_sum==sum)
//             return true;
//         if(e<n)
//             curr_sum +=arr[e];
//     }
//     return (curr_sum==sum);
// }

// example
// {1,4,20,3,10,5}
// e=1 curr_sum=5
// e=2 curr_sum=25
// e=3 curr_sum=28
// e=4 curr_sum=38
// e=5 curr_sum=37 s=1
// curr_Sum=33 s=2
// return true
// int main()
// {
//     int arr[]={1,4,20,3,10,5};
//     bool res = isSubSum(arr,6,33);
//     cout<<"the sum is present \t"<<res<<"\n";
//     return 0;
// }
// above algo is only applicable to positive numbers
// not to -ve array

// excersie

// 1 N-bonacci numbers:print first m N-bonacci number
// fibonacci 2-bonacci
// it means current element equal to sum of its previous
// two numbers and at starting  n-1 zero will be present

// exaple:
// i/p n=3 m=8
// here n-1=2 zero will be present
// o/p: 0 0 1 1 2 4 7 13

// i/p n=4 m=10
// o/p: 0 0 0 1 1 2 4 8 15 29

// 17:23
// #include <bits/stdc++.h>

// using namespace std;

// void nBonacci(int n, int m)
// {
//     int c=0;int sum=1;
//     int arr[m];
//     for (int i = 0; i < m; i++)
//     {

//         if (i < n - 1)
//             arr[i]=0;
//         else if(i ==n-1)
//             arr[i]=1;
//         else
//         {
//             arr[i]=sum;
//             sum=sum-arr[c++]+arr[i];
//         }
//     }
//     for(int i=0;i<m;i++)
//         cout<<arr[i]<<"\t";
// }
// int main()
// {
//     nBonacci(4,10);
//     return 0;
// }

// do this example after completion of hashing
// it needs knowledgge of both window sliding and hashing

// count distinct elements in every window of size k
// i/p:arr[]={1,2,1,3,4,3,3}
// k=4
// o/p:3 4 3 2

