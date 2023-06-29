// search a element in the infinite length array

// naive solution

// #include <bits/stdc++.h>
// using namespace std;

// int search(int arr[], int x)
// {
//     int i = 0;
//     while (true)
//     {
//         if (arr[i] == x)
//             return i;
//         if (arr[i] > x)
//             return -1;
//         i++;
//     }
// }

// int main()
// {
//     int arr[]={10,15,20};
//     int res = search(arr,20);
//     cout<<"\t result = "<<res<<"\n";
//     return 0;
// }

// above solution will take O(pos) time

// efficient solution

// in this algorithm we first we will check for 0 position
// then we will update the index by the multiplication of 2
// will do the same until arr[i] < x
// x is the input element
// when we reach the position where arr[i] >x
// then we will apply the binary search (i/2+1) to i-1
// because we know that x is the greater than i/2

// example:
// arr[]={1,10,15,20,40,60,80,100,200,500,1000,----}
// x=100
// intially i=1
// after while loop will get
// i=8 because 200 mai aake rukega
// then will check arr[i] ==x that is false
// then will apply binary search from (i/2+1) to i-1

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int search(int arr[], int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (arr[i] < x)
        i = i * 2;
    if (arr[i] == x)
        return i;
    return binarySearch(arr, i / 2 + 1, i - 1, x);
}
int main()
{
    int arr[]={1,10,15,20,40,60,80,100,200,500,1000};
    int res=search(arr,502);
    cout<<"elements is present at position \t"<<res<<"\n";
    return 0;
}
