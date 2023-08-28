#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void moreOccur(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if (map.find(arr[i]) != map.end())
            map[arr[i]]++;
        else
            map[arr[i]] = 1;
    }
    for (auto e : map)
    {
        if (e.second > (n / k)) // Corrected the condition
            cout << e.first << " occurs " << e.second << " times.\n";
    }
}

int main()
{
    int arr[] = {10,10, 20, 30, 10, 10, 20}, n = 7, k = 2;
    moreOccur(arr, n, k);
    return 0;
}