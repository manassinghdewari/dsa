#include<bits/stdc++.h>
using namespace std;

struct KStacks
{
    int* arr,*top,*next;
    int k,freeTop,cap;
    KStacks(int k1,int n)
    {
        k=k1;
        cap=n;
        arr=new int[cap];
        top=new int [k];
        next=new int [cap];
        for(int i=0;i<k;i++)
            top[i]=-1;
        freeTop=0;
        for(int i=0;i<cap-1;i++)
            next[i]=i+1;
        next[cap-1]=-1;

    }
}

int main()
{
    
    return 0;
}