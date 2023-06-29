// Spiral traversal of matrix

// in this we will keep 4 variable left right top nd bottom

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20

// At first
// top will point to first row
// right will point to last column
// bottom will point to last row
// left will point to first column

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20

// top=0 bottom=3 right=3 left=0

// o/p
// 1 2 3 4 top=1
// 1 2 3 4 8 12 16 right =2
// 1 2 3 4 8 12 16 15 14 13 bottom=2
// 1 2 3 4 8 12 16 15 14 13 9 5 left=1
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 top=2
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 right=1
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 bottom=1

#include <bits/stdc++.h>
using namespace std;

void printSpiral(vector<vector<int>> &matrix, int r, int c)
{
    int top = 0, right = c - 1, left = 0, bottom = r - 1;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
            cout << matrix[top][i] << " ";
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << matrix[i][right] << " ";
        }
        right--;
        if (top <= bottom) // this is condition for it will not run if one row is left
        {
            for (int i = right; i >= left; i--)
            {
                cout << matrix[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right) // this is condition for it will not run if one column is left
        {
            for (int i = bottom; i >= top; i--)
                cout << matrix[i][left] << " ";
            left++;
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int r = 4, c = 4;
    printSpiral(matrix, r, c);
    return 0;
}
