// Allocate minimum no of pages

// minimize the maximum pages allocated
// only contigious page can be allocated
// we have to assign pages of book such that it is minimum
// no of pages can be allocated
// k is the no fof students
// I/p:arr[]={10,20,30,40}
// it is the book1=10pages,book2=20pages,book3=30pages,book4 = 40pages

// k=2
// o/p:60 (student 1=(10+20+30)=60 student2=40)

// I/p:arr[]={10,20,30}
// k=1
// o/p:60 (student 1=(10+20+30)=60 ) bcz k=1  only one student

// I/p:arr[]={10,5,30,1,2,5,10,10}
// k=3
// o/p:30  (student 1 =10+5=15 student 2 =30, student 3 = 1+2+5+10+10=28)

#include <bits/stdc++.h>
using namespace std;

int sum(int arr[], int b, int e)
{
    int s = 0;
    for (int i = b; i <= e; i++)
        s += arr[i];
    return s;
}
int minPages(int arr[], int n, int k)
{
    if (k == 1)
        return sum(arr, 0, n - 1);
    if (n == 1)
        return arr[0];
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        res = min(res, max(minPages(arr, i, k - 1), sum(arr, i, n - 1)));
    }
    return res;
}

int main()
{
    int arr[]={10,5,30,1,2,5,10,10};
    int ans=minPages(arr,8,3);
    // int arr[] = {10, 20, 30, 40};
    // int ans = minPages(arr, 4, 2);
    cout << "answer is " << ans << "\n";
}