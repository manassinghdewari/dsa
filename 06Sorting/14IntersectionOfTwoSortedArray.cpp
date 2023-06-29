// Naive solution

// a[]={1,20,20,40,60}
// b[]={2,20,20,20,20}

// #include<bits/stdc++.h>
// using   namespace std;

// // Time Complexity O(n*m)
// void intersection(int a[],int b[],int m,int n)
// {
//     for(int i=0;i<m;i++)
//     {
//         if(i>0 && a[i] == a[i-1])
//             continue;
//         for(int j=0;j<n;j++)
//         {
//             if(a[i]==b[j])
//             { 
//                 cout<<a[i] << " ";
//                 break;
//                 // bcz once it matched we will search for next index
//             }
//         }
//     }
// }

// int main()
// {
//     int a[]={1,20,20,40,60};
//     int b[]={2,20,20,20};
//     intersection(a,b,5,4);
//     return 0;
// }


// efficient approach

// O(m+n)


#include<bits/stdc++.h>
using namespace std;

void intersectionUsingMerge(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(i>0 && a[i] == a[i-1])
        {
            i++;
            continue;
        }
        if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
        else
        {
            cout<<a[i] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    int a[]={10,10,60,80,80};
    int b[]={2,10,40,80};
    intersectionUsingMerge(a,b,5,4);
}