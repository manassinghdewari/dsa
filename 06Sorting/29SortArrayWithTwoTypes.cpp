// given an array in which we have to seprate -ve values on
// left side and +ve values on right side

// for effiient solution we will use partition function
// will use Hoare's partition function

#include <bits/stdc++.h>
using namespace std;

void segPosNeg(int arr[], int n)
{
    int i = -1, j = n;
    while (true)
    {
        do
        {
            i++;
        } while (arr[i] < 0);
        do
        {
            j--;
        } while (arr[j] >= 0);
        if (i >= j)
            return;
        swap(arr[i], arr[j]);
    }
}

int main()
{
    int arr[]={-12,18,-10,15},n=4;
    segPosNeg(arr,n);
    cout<<"\n";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    return 0;
}