// Rotate a matrix by 90 degree

// I/p:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// O/p:

//  4 8 12 16
//  3 7 11 15
//  2 6 10 14
//  1 5 9 13

// naive Apoproach

// #include <bits/stdc++.h>
// using namespace std;

// void rotateMatrix(vector<vector<int>> &matrix, int r, int c)
// {
//     vector<vector<int>> temp;
//     for (int i = 0; i < r; i++)
//     {
//         vector<int> row;
//         for (int j = 0; j < c; j++)
//         {
//             row.push_back(matrix[j][c - 1 - i]);
//         }
//         temp.push_back(row);
//     }
//     matrix = temp;
// }
// int main()
// {
//     vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
//     int r = 4, c = 4;
//     rotateMatrix(matrix, r, c);
//     for (int i = 0; i < r; i++)
//     {
//         for (int j = 0; j < c; j++)
//             cout << matrix[i][j] << " ";
//         cout << "\n";
//     }
//     return 0;
// }

// efficient way in O(n^2) in O(1) extra spacr
// first find the transpose of the matrix
// and exchange the rows

#include <bits/stdc++.h>

using namespace std;

void transpose(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            swap(matrix[i][j], matrix[j][i]);
}
void rotateMatrix(vector<vector<int>> &matrix, int n)
{
    transpose(matrix, n);

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(matrix[i][j], matrix[n - 1 - i][j]);
        }
    }

    // for (int i = 0; i < r; i++)
    // {
    //     int low=0,high=r-1;
    //     while(low<high)
    //     {
    //         swap(matrix[low][i],matrix[high][i]);
    //         low++;
    //         high++;
    //     }
    // }
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int n = 4;
    rotateMatrix(matrix, n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
    return 0;
}