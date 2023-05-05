// paartion function of quick sort

#include <bits/stdc++.h>
using namespace std;

void partition(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] <= arr[p])
        {
            // cout<<endl<<index<<endl;
            temp[index] = arr[i];
            index++;
        }
    }
    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p])
        {
            // cout<<endl<<index<<endl;
            temp[index] = arr[i];
            index++;
        }
    }

    for (int i = l; i <= h; i++)
    {
        arr[i] = temp[i - l];
    }
}

int main()
{
    int a[] = {5, 13, 6, 9, 12, 11, 8};
    partition(a, 0, 6, 6);
    cout << "array after partition\n";
    for (int i = 0; i <= 6; i++)
        cout << a[i] << " ";
    return 0;
}