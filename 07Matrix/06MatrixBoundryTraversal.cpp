// we have to print the boundry elements

// I/p: 1 2  3 4
//      5 6 7 8
//      9 10 11 12
//      13 14 15 16
// O/p: 1 2 3 4 8 12 16 1

// I/p: 1 2 3 4
//  5 6 7 8
// O/p: 1 2 3 4 8 7 6 5

// there will be a corner case
// if there is only one row oir one column

#include <bits/stdc++.h>
using namespace std;

const int r = 4;
const int c = 4;

void boundryTraverse(int mat[r][c])
{
    if (r == 1)
    {
        for (int i = 0; i < c; i++)
            cout << mat[0][i] << " ";
    }
    else if (c == 1)
    {
        for (int i = 0; i < r; i++)
        {
            cout << mat[i][0] << " ";
        }
    }
    else
    {
        for (int i = 0; i < c; i++)
            cout << mat[0][i] << " ";
        for (int i = 1; i < r; i++)
            cout << mat[i][c - 1] << " ";
        for (int i = c - 2; i >= 0; i--)
            cout << mat[r - 1][i] << " ";
        for (int i = r - 2; i >= 1; i--)
            cout << mat[i][0] << " ";
    }
}
int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    boundryTraverse(arr);
    return 0;
}