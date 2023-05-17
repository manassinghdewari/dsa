// Sort an array with three types

// 1->
// sort an array of 0s,1s and 2s
// I/p:arr[]={0,1,0,2,1,2}
// o/p:arr[]={0,0,1,1,2,2}

// 2->Three way Partitioning

// pivot can be multiple
// I/p:{2,1,2,20,10,20,,1}  pivot=2
// O/p:{1,1,2,2,20,10,20}

// 3->Partition Around a Range
// I/p:{10,5,6,3,20,9,40}   //range=[5,10]
// O/p:{3,5,6,9,10,20,40}

#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n)
{
    int l = 0, h = n - 1, mid = 0;
    while (mid <= h)
    {
        if (arr[mid] == 0)
        {
            swap(arr[l], arr[mid]);
            l++;
            mid++;
        }
        else if (arr[mid] == 1)
            mid++;
        else
        {
            swap(arr[mid], arr[h]);
            h--;
        }
    }
}

int main()
{
    int arr[] = {0, 0, 1, 1, 2, 1, 0}, n = 7;
    sort(arr, n);
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}