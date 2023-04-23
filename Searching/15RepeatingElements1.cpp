// Repeating Elements

// I/P: arr[]={0,2,1,3,2,2}
// o/p:2

// i/p: arr[]={1,2,3,0,3,4,5}
// o/p:3

// i/p:arr[]={0,0}
//  o/p:0

// super Naive Approach
// to use two for loops  time complexity wiil be O(n^2)

// Naive Approach
// first short the array
// then iterate over it if(a[i]===a[i+1])
// then return a[i]
// but it will change the original array

// Efficient approach
// Time complexity will be O(n)
// aux space will be O(n)

// ion this approach first we created and initialize the array with false values (visited) then arr[i] gives the index of visited array
// first time will do it true ,visited[arr[i]]=true so that if element will repeat at that time value of that index will be true
// bcz we have visited that element once..
// #include <bits/stdc++.h>
// using namespace std;

// int isReapeat(int arr[], int n)
// {
//     vector<int> visited(n,0);
//     for (int i = 0; i < n; i++)
//     {
//         if (visited[arr[i]] )
//             return arr[i];
//         visited[arr[i]] = true;
//     }
// }
// int main()
// {
//     int arr[] = {0, 2, 1, 3, 2, 2};
//     int res = isReapeat(arr, 6);
//     cout << "answer is " << res << "\n";

//     return 0;
// }


// Repeating Element O(n) time ,O(1) space and no changes
// to original array



// i/p:arr[]={1,1}
// o/p:1

// i/p:arr[]={3,4,5,1,2,4,4}
// o/p:4

// I/p:arr[]={1,3,2,4,3,3}
// o/p:3

// let's assume this case
// there is link between the elements 

// 1 -> 3 ->4 ->6 -> 7->3
// here we can see that the pattern is like
// we will visit elements of array by assuming the array 
// element as index

// like first arr[0]=1 
// arr[1]=3
// ar[3]=4
// arr[4]=3
// arr[3]=4
// so we have visted arr[3] again so this is a repeating 
// element