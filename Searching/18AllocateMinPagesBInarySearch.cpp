// allocate minimum pages (Binary Seatch)

// let arr[]={10,20,10,30}
// k=2
// sum of all pages = 10+20+10+30=70
// answer will be in range [maxValue,sumValue]
// range of answer will be [30,70]

// now we will find the mid of 30 and 70
// will check the answer is feasible or not

// x=(30+70)/2
// x=50
// so it means no student can read more than 50 pages
// so will calculate the how many students  for this
// now will check the 50 is feasible or not

// in the above case
// x=(30+70)/2 = 50
// then will check from left tot right
// 10+20+10=40 so it possible so res=50
// buit will try for more accurate solution
// will reduce high so high = 49
// x=(30+49)/2=>39
// si this case 10+20+10=40
// so we will increse the low =mid+1
// x=(40+49)/2=44 res=44
// x=(40+43)/2=41 res=41
// x=(40+40)/2=40 res=40

#include <bits/stdc++.h>
using namespace std;

bool isFeasible(int arr[], int n, int k, int ans)
{
    int req = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + sum > ans)
        {
            req++;
            sum = arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    return (req <= k);
}
int minPages(int arr[], int n, int k)
{
    int sum = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx = max(arr[i], mx);
    }
    int low = mx, high = sum, res = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isFeasible(arr, n, k, mid))
        {
            res = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return res;
}
int main()
{
    // int arr[]={10,5,20};
    int arr[] = {10, 5, 30, 1, 2, 5, 10, 10};
    int answer = minPages(arr, 8, 3);
    cout << "the anser is :" << answer << "\n";
    return 0;
}