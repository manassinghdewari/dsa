#include <bits/stdc++.h>
using namespace std;

void printUnion(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            i++;
            continue;
        }
        if (j > 0 && b[j] == b[j - 1])
        {
            j++;
            continue;
        }
        if (a[i] < b[j])
        {
            cout << a[i] << " ";
            i++;
        }
        else if (a[i] > b[j])
        {
            cout << b[j] << " ";
            j++;
        }
        else
        {
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
    while (i < m)
    {
        if (i == 0 || i > 0 && a[i] != a[i - 1])
        {

            cout << a[i] << " ";
        }
        i++;
    }
    while (j < n)
    {

        if (j == 0 || j > 0 && b[j] != b[j - 1])
        {
            cout << b[j] << " ";
        }
        j++;
    }
}
int main()
{
    // int a[] = {1, 2, 10, 10};
    int a[] = {1, 2, 3, 4};
    // int b[] = {5, 10, 10, 12, 20, 30, 30};
    int b[] = {5, 6, 7, 8};
    printUnion(a, b, 4, 4);
    return 0;
}