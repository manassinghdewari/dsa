// log(n) time and o(1) aux space

// 3^10 = 3^8 * 3^2
// 10 = 1010
// so 3^10 = 1*3^8+0*3^4+1*3^2+0*3^1

// 3^19 = 3^16*3^2*3^1
// 19 =10011
// 3^19= (1*3^16)*(0*3^8)*(0*3^4)*(1*3^2)*(1*3^1);

// we can iterate all the numbers by n=n/2;

#include<bits/stdc++.h>
using namespace std;
// for x^n
// 
int power(int x,int n)
{
    int res=1;
    while(n>0)
    {
        if(n%2 != 0)
            res=res*x;
        x=x*x;
        n=n/2;
    }
    return res;
}
int main()
{
    cout<<"power of x^nis"<<power(3,4)<<"\t";
    return 0;
}