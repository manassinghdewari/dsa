// Search in row wise and column wise sorted matrix
// In this problem the matrix elememtns will be sorted both
// row wise and column wise

// So we need to find the index of element in the matrix
// efficient way time complexity O(R+C)
// 
// ->Begin from the top right corner
// ->if x is same print position and return
// if x is smaller move left
// if x is greater move down

// 10 20 30 40
// 15 25 35 45
// 27 29 37 48
// 32 33 39 50


// in this approach we can use we are using top right corner
// bcz from here we can check smaller and greater elements
// from this index
// so we can also use bottom left corner

// but not top left and bottom right

#include<bits/stdc++.h>

using namespace std;

int search(vector<vector<int>>&arr,int r,int c,int x)
{
    int i=0,j=c-1;
    while(i<r && j >=0)
    {
        if(arr[i][j]==x)
        {
            cout<<"elements found at \t"<<i<<" "<<j<<"\n";
            return x;
        }
        else if(arr[i][j]<x)
            i++;
        else
            j--;
    }
    cout<<"\n Not Found";
    return -1;
}
int main()
{
    vector<vector<int>>arr={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    int r=4,c=4;
    int x=35;;
    int res=search(arr,r,c,x);
    cout<<"\nresult is at"<<res;
    return 0;
}