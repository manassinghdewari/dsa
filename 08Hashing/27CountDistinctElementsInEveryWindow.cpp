#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int DistinctWinowElements(int arr[], int n, int k)
{
    unordered_map<int, int> map;
    int count = 0, res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {

        if (map.find(arr[i]) != map.end() && map[arr[i]]>0)
        {
            map[arr[i]]++;
        }
        else
        {
            map[arr[i]] = 1;
            curr++;
        }
        count++;

        if (count == k)
        {
            res = max(res, curr);
            if (map[arr[i - k + 1]] > 1)
            {
                map[arr[i - k + 1]]--;
            }
            else
            {
                curr--;
                map.erase(arr[i - k + 1]);
            }
            count--;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 20, 10, 10, 30, 40}, n = 6, k = 4;
    int res = DistinctWinowElements(arr, n, k);
    cout << "\n the value of k is \t" << res << "\n";
    return 0;
}