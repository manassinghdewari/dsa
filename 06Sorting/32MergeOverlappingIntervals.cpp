// Merge Overlapping Intervals

// I/p:{{1,3},{2,4},{5,7},{6,8}}
// O/p:{{1,4},{5,8}}

// I/p:{{7,9},{6,10},{4,5},{1,3},{2,4}}
// O/p:{{1,5},{6,10}}

// How tot check if two intervals overlap??????

// i1=[5,10]
// i2=[1,7]
// find the maximum of lower value(left)  of interval in this case it is 5
// then check if it is lies within the another interval.
// if lies then overlaps otherwise not.

// i1=[10,20]
// i2=[5,15]
// O/p:[mmax of lower value of  interval that is 10, ]
// l0 lies in the interval so it overlaps

// i1=[10,20]
// i2=[100,200]

// so 10 does't lies in another interval

// #############################

// we can also check using the small value of end side of an interval
// then will check wheather it will lie in the other range or not

// i1=[5,10]
// i2=[1,7]
// right min=7 and it lies in the interval

// i1=[10,20]
// i2=[5,15]
// right_min=15 and it lies in the first interval

// i1=[10,20]
// i2=[100,200]
// right_min is 20 so it does't lies in the second intrval

#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    int st, end;
};

bool myCmp(Interval i1, Interval i2)
{

    if (i1.st == i2.st)
    {
        return i1.end < i2.end;
    }
    return (i1.st < i2.st);
}
void mergeInterval(Interval arr[], int n)
{
    sort(arr, arr + n, myCmp);
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[res].end >= arr[i].st)
        {
            arr[res].end = max(arr[res].end, arr[i].end);
            arr[res].st = min(arr[res].st, arr[i].st);
        }
        else
        {
            res++;
            arr[res] = arr[i];
        }
    }
    for (int i = 0; i <= res; i++)
        cout << "{" << arr[i].st << "," << arr[i].end << "}"
             << "\t";
}
int main()
{
    // Interval obj[] = {{1, 3}, {2, 4}, {5, 7}, {6, 8}};
    Interval obj[] = {{7, 9}, {6, 10}, {4, 5}, {1, 3},{2,4}};
    cout << "\n solution of problema is:"
         << " ";

    mergeInterval(obj, 5);
}
