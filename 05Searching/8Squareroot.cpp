// time complexity log(n)
// in this algo we first we will find the mid element 
// then will take sqaure of that number 
// then will check the mid square with the input number
// if they are equal then return mid
// if mdsqaure is greater then x then make high=mid-1
// if mdsquare is less then x then will store the mid 
// value in ans and increse the low=mid+1
// because it may be the case that next high value 
// square may be more than the input number

// x=10

// low=1 high=10

// Ist iteration

// mid=5
// msq=25
// high=4

// IInd iteration

// mid=2
// msq=4
// low=3
// ans=2

// IIIrd iteration

// mid=3
// msq=9
// low=4
// ans=3

// IV iteration

// mid=4
// msq=16
// high=3

// now it will stop high < low

#include<bits/stdc++.h>

using namespace std;

int sqRootFloor(int x)
{
    int low =1,high=x,ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int msq=mid*mid;
        if(msq == x)
            return mid;
        else if(msq > x)
            high = mid-1;
        else
            {
                low = mid+1;
                ans=mid;
            }
    }
    return ans;
}
int main()
{
    cout<<"sqrt of 20 is"<<sqRootFloor(20)<<"\n";
    return 0;
}