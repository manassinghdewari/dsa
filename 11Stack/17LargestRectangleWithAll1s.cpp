#include<bits/stdc++.h>
using namespace std;

int maxRectange(int mat[][],int r,int c)
{
    int res=0;
    res=largestHistogram(mat[0],c);
    for(int i=1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]==1)
            {
                mat[i][j]+=mat[i-1][j];
            }
        }
        res=max(res,largestHistogram(mat[i],c));
    }
    return res;
}

int main()
{
    int arr[][]={{1,0,0,1,1},{0,0,0,1,1},{1,1,1,1,1},{0,1,1,1,1}};
    int r=4,c=5;
    int answer=maxRectangle(arr,r,c);
    return 0;
}