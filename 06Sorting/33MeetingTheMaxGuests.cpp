// in this prog first we will sort both the arrays
// we will check if arrival<departure then will increment the count
// bcz that is the time when guest is added
// otherwise if arival is greater than departure of previous guest
// it means guest was departed before

// so like this will count the guest
#include <bits/stdc++.h>
using namespace std;

int maxCount(int arr[], int dep[], int n)
{
    int i = 1, j = 0, res = 1, curr = 1;
    sort(arr, arr + n);
    sort(dep, dep + n);
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            // it means new guest came
            curr++;
            i++;
        }
        else
        {
            // it means guest chla gya
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}
int main()
{
    int arr[] = {900, 600, 700};
    int dep[] = {1000, 800, 730};
    int result = maxCount(arr, dep, 3);
    cout << "\n The maximum guest at a time are"
         << " " << result << "\n";
    return 0;
}