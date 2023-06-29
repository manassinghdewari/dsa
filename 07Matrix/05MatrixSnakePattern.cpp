// Snake pattern

#include <bits/stdc++.h>
using namespace std;
const int r = 4;
const int c = 4;
void printSnake(int arr[r][c])
{
    for (int i = 0; i < r; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < c; j++)
                cout << arr[i][j] << " ";
        }
        else
        {
            for (int j = c - 1; j >= 0; j--)
                cout << arr[i][j] << " ";
        }
    }
}
int main()
{
    int arr[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    printSnake(arr);
}