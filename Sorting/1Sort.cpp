// Sort an array

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter the no of elements \n";
//     cin>>n;
//     int arr[n];
//     cout<<"enter the values\n";
//     for(int i=0; i<n; i++)
//         cin>>arr[i];
//     sort(arr,arr+n);
//     for(int x:arr)
//         cout<<x<<" ";
//     // using third parameter greater will sort the array
//     // in descending order
//     sort(arr,arr+n,greater<int>());
//     cout<<"\nafter greater \n";
//     for(int x:arr)
//         cout<<x<<" ";
//     return 0;
// }

// sort a vector

// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v ={5,7,20,10};
//     sort(v.begin(),v.end());
//     for(int x : v)
//         cout<<x<<" ";
//     cout<<"\n";
//     sort(v.begin(),v.end());
//     for(int x:v)
//         cout<<x<<" ";
//     cout<<"\n";
//     sort(v.begin(),v.end(),greater<int>());
//     cout<<"\n after use of greater\n";
//     for(int x:v)
//         cout<<x<<" ";
//     cout<<"\n";
//     return 0;
// }

// sorting function

#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

// this myCmp function return the p1.x <p2.x
bool myCmp(Point p1, Point p2)
{
    return (p1.x < p2.x);
}
int main()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};
    // sort function will use myCmp function for comparison , sort function takes two values at a time let it will take p1={3,10} p2={2,8}
    // now if p1.x<p2.x then it will swap the values 
    // this is how this function works
    sort(arr, arr + 3, myCmp);
    for (auto i : arr)
        cout << i.x << " " << i.y << "\n";
    return 0;
}
 