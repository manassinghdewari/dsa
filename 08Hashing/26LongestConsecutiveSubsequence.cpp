//  longest consecutive subsequence means difference between
// the elements should be one

// first method
// By usign sorting
// time complexity nlogn

// #include <bits/stdc++.h>
// using namespace std;

// int findLongestConsecutive(int arr[], int n)
// {
//     int res = 1, curr = 1;
//     sort(arr, arr + n);
//     for (int i = 1; i < n; i++)
//     {
//         if (arr[i] == arr[i - 1] + 1)
//             curr++;
//         else
//         {
//             res = max(res, curr);
//             curr = 1;
//         }
//     }
//     res = max(res, curr);
//     return res;
// }
// int main()
// {
//     int arr[] = {1, 9, 3, 4, 2, 10, 13}, n = 7;
//     int res = findLongestConsecutive(arr, n);
//     cout << "\n"
//          << "longest consecutive length" << res << "\n";
//     return 0;
// }

// more efficient implementation
// O(n)

#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int findLongestConsecutive(int arr[], int n)
{
    unordered_set<int> s;
    int res = 0, curr;
    for (int i = 0; i < n; i++)
        s.insert(arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            curr = 1;int k=1;
            while (s.find(arr[i] + k) != s.end())
            {
                curr++;
                k++;
            }
            res = max(res, curr);
        }
    }
    return res;
}
int main()
{
    int arr[] = {3, 6, 4, 5, 7}, n = 5;
    int res = findLongestConsecutive(arr, n);
    cout << "\n"
         << "longest consecutive length" << res << "\n";
    return 0;
}