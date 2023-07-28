#include <bits/stdc++.h>
#include <unordered_map>
// if we elements are repeating then we will insert only element
// which comes first
using namespace std;
int longestSubArray(int arr[], int n, int sum)
{
    unordered_map<int, int> map;
    int res = 0, prefix_sum = 0;
    for (int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if (prefix_sum == sum)
            res = i + 1;
        // for inserting only those elements which are
        // not repeating
        if (map.find(prefix_sum) == map.end())
        {
            map[prefix_sum] = i;
            cout << "\n"
                 << prefix_sum << "\t" << map[prefix_sum];
        }
        if (map.find(prefix_sum - sum) != map.end())
            res = max(res, i - map[prefix_sum - sum]);
    }
    return res;
}

int main()
{
    int arr[] = {8, 3, 1, 5, -6, 6, 2, 2}, n = 8;
    int result = longestSubArray(arr, n, 4);
    cout << "\n Subarray is present \t" << result << "\n";
    return 0;
}