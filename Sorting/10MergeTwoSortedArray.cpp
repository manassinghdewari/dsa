// merge two sorted arrays

// I/p:a[]={10,15,20}
// b[]={5,6,6,15}
// O/p:[5,6,6,10,15,15,20]

// I/p:a[] = {1,1,2}
// b[]={3}
// O/p:1 1 2 3

// #include <bits/stdc++.h>
// using namespace std;

// void merge(int a[], int b[], int m, int n)
// {
//     int c[m + n];
//     for (int i = 0; i < m; i++)
//     {
//         c[i] = a[i];
//     }
//     for (int i = 0; i < m; i++)
//     {
//         c[m + i] = b[i];
//     }
//     sort(c, c + m + n);

//     // display the array after merge
//     for (int i = 0; i < (m + n); i++)
//         cout << c[i] << " ";
// }


// int main()
// {
//     int a[] = {10, 15, 20,20};
//     int b[] = {1,12};

//     merge(a, b, 4, 2);
//     return 0;
// }


// another approch

#include<bits/stdc++.h>

using namespace std;

void merge(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        {
            cout<<b[j]<<" ";
            j++;
        }
    }
    while(i<m)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<b[j]<<" ";
        j++;
    }
}

int main()
{
   int a[] = {10, 15, 20,20};
    int b[] = {1,12};

    merge(a, b, 4, 2);
    return 0;
}