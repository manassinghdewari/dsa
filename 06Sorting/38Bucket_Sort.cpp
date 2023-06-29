// COnsider a situation where we have number uniformly distributed in range from 1 to 10^8

// Consider another situation where we have floating point
// numbers 'uniformly distributed in range from 0.0 to 1.0

// Step 1-> Scatter the bucket
// Step-2->Sort Buckets
// Step-3 Join Sorted Buckets

// I/p: arr[]={20,80,10,85,75,99,18}  K=5 k is num of buckets
// O/p:{10,18,20,75,80,99,18}

// I/p:arr[]={20,80,40,30,70}  k=4
// arr[]={20,30,40,70,80}

#include <bits/stdc++.h>
using namespace std;

void bucketSort(int arr[], int n, int k)
{
    int max_val = INT_MIN;
    for (int i = 0; i < n; i++)
        max_val = max(max_val, arr[i]);
    max_val++;
    vector<int> bkt[k];
    for (int i = 0; i < n; i++)
    {
        int bi = (k * arr[i]) / max_val;
        bkt[bi].push_back(arr[i]);
    }
    for (int i = 0; i < n; i++)
        sort(bkt[i].begin(), bkt[i].end());

    int index = 0;
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < bkt[i].size(); j++)
        {
            arr[index++] = bkt[i][j];
        }
    }
}
int main()
{
    int arr[] = {30, 40, 10, 80, 5, 12, 70}, n = 7, k = 4;
    cout << "\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}

// Tips:Insertion So rt is the best if number of elements in  the array are less

