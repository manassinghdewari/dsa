// minimum group flips to make same

// we can flip either consecutive zero or either 
// consecutive one.

// not both at a time
// but take care of flips should be minimu


// ip:arr[]={1,0,0,0,1,0,0,1,1,1,1}
// o/p: from 1 to 3
        // from 5 to 6

// i/p:{1,1,0,0,0,1}
// o/p: from 2 to 4

// i/p:{1,1,1}
// o/p:

// i/p:{0,1}
// o/p: from 0 to 0 
// or from 1 to 1


// there is a intresting fact that difference between
// number of groups of zero and number of groups of one
// will be always zero or one.

// group counts differ by one :

// 11000111001
// 00110001100

// in this also there is one more intresting fact that
// is the difference between the groups will be one if
// starting and ending element are same.

// groups count are same  (difference is zero)

// 00111000011
// 11000011110

// in this also difference will be zero if the starting 
// and ending element are not same.


// if we will flip second group then  will get minimum
// flips to make same

// algorithm
// example
// 0 0 1 1 0 0 1 1 0 1
// i=1 :
// i=2: from 2 to 
// i=3:
// i=4:3 (newline)
// i=5:
// i=6:from 6 to 
// i=7:
// i=8:7
// i=9: from 9 to
// now loop will end now the last condition will print
// 9

#include<bits/stdc++.h>
using namespace std;
void printGroups(bool arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            if(arr[i] != arr[0])
                cout<<"From" <<i<<"to";
            else
                cout<<(i-1)<<"\n";
        }
    }
    if(arr[n-1] != arr[0])
        cout<<(n-1)<<"\n";
}
int main()
{
    bool arr[]={0 ,0 ,1 ,1 ,0 ,0 ,1 ,1 ,0 ,1};
    printGroups(arr,10);
    return 0;
} 