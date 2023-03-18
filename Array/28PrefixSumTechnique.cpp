// Prefix Sum

// given a fixed array and multiple queries of
// following types on the array, how to efficiently perform
// these queries.

// i/p: arr[]= {2,8,3,9,6,5,4}
// Queries
// getSum(0,2)
// getSum(1,3)
// getSum(2,6)

// o/p 13 20 27

// solve this in O(1)
// for solving this in O(1) time we we store the sum of element
// in the next index

// example
// arr[]={2,8,3,9,6,5,4}

// for this array prefix sum is

// exp: prefix_sum[]={2,10,13,22,28,33,37}

// #include <bits/stdc++.h>
// using namespace std;
// int getSum(int prefix_sum[], int l, int r);

// int main()
// {
//     int n = 7;
//     int arr[] = {2, 8, 3, 9, 6, 5, 4};
//     int prefix_sum[n];
//     prefix_sum[0] = arr[0];
//     for (int i = 1; i < n; i++)
//     {
//         prefix_sum[i] = prefix_sum[i - 1] + arr[i];
//     }
//     int l, r;
//     cout << "enter the value of l and r \n";
//     cin >> l >> r;
//     int res = getSum(prefix_sum, l, r);
//     cout << "\nvalue of ressult is:" << res<<"\n";
//     return 0;
// }

// int getSum(int prefix_sum[], int l, int r)
// {
//     if (l != 0)
//         return prefix_sum[r] - prefix_sum[l - 1];
//     else
//         return prefix_sum[r];
// }

// given an array of integer find if it has an
// equilibrium point

// equilibrium  point means a there is a
// element who has left side sum
// and right side sum equal
// for corner elements sum is equal to zero for that side
// where there is no element

// example: arr[]={3,4,8,-9,20,6}
// for 20 it is equilibrium point
// o/p:Yes (3+4+8-9=6)===(LHS===RHS)

// I/P: arr[]={4,2,-2}
// for this 4 is the equilibrium point
// o/p:Yes (LHS=0 and RHS=0)

// I/P: arr[]={4,2,2}
// for this 4 is the equilibrium point
// o/p:No

// naive solution

// #include <bits/stdc++.h>

// using namespace std;

// int isEquilibriumPoint(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int l_sum = 0, r_sum = 0;
//         for (int j = 0; j < i; j++)
//             l_sum += arr[j];
//         for (int k = i + 1; k < n; k++)
//             r_sum += arr[k];
//         if (l_sum == r_sum)
//             return true;
//     }
//     return false;
// }
// int main()
// {
//     int n;
//     cout << "enter the value of n \n";
//     cin >> n;
//     int arr[n];
//     cout << "enter the values in the array \n";
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];
//     bool res = isEquilibriumPoint(arr, n);
//     cout << "\n"
//          << res << "\n";
//     return 0;
// }

// efficient implementation in O(n)

#include <bits/stdc++.h>
using namespace std;

bool isEqPoint(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int l_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (l_sum == sum - arr[i])
            return true;
        l_sum += arr[i];
        sum -= arr[i];
    }
    return false;
}
int main()
{
    int n;
    cout << "enter the value of n \n";
    cin >> n;
    int arr[n];
    cout << "enter the values in the array \n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bool res = isEqPoint(arr, n);
    cout << "\n"
         << res << "\n";
    return 0;
}