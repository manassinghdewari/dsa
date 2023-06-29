// efficient -> O(r*log(max-min)*log c)

// using the upper_bound function we will find the index of
// elements which are greater than given element

// first we will find the the position of the elements
// where median can be found
// medPos=(r*c+1)/2;
// then run a loop
// then calclatesType
// then we will check if the midPos is less than medPos then mid=m
#define MAX 5
#include <bits/stdc++.h>

using namespace std;

int matMed(int mat[][MAX], int r, int c)
{
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < r; i++)
    {
        if (mat[i][0] < min)
            min = mat[i][0];
        if (mat[i][c - 1] > max)
            max = mat[i][c - 1];
    }
    int desired = (r * c + 1) / 2; //actual position of median
    while (min < max)
    {
        int mid = (min + max) / 2;
        int place = 0;
        // here we are calculating how many elements are smaller than mid that is place
        // if place is  smaller than desired than we will increments the min because the current mid is not desired 
        // if place is bigger than desire it means number than will do max=min
        // bcz we need desired position equal to desired
        // 
        for (int i = 0; i < r; i++)
            place += (upper_bound(mat[i], mat[i] + c, mid) - mat[i]);
        // in this casse upper_bound(mat[i], mat[i] + c, mid) - mat[i]
        // this whole thing will give the index of element which is greater then mid

        if (place < desired)
            min = mid + 1;
        else
            max = mid;
    }
    return min;
}

int main()
{
    int mat[][MAX] = {{5, 10, 20, 30, 40}, {1, 2, 3, 4, 6}, {11, 13, 15, 17, 19}};
    int r = 3, c = 5;
    int res = matMed(mat, r, c);
    cout << "\n median of matrix is " << res << "\n";
    return 0;
}
