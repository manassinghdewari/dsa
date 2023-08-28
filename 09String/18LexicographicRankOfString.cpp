// in this we will use permutations
#include<bits/stdc++.h>
using namespace std;
const int MAX=256;
int factorial(int n)
{
    int ans=1;
    while(n>0)
    {
        ans*=n;
        n--;
    }
    return ans;
}

int lexRank(string str)
{
    int n=str.length();
    int mul=factorial(n);
    int count[MAX]={0};
    for(int i=0;i<n;i++)
        count[str[i]]++;
    for(int i=1;i<MAX;i++)
        count[i]+=count[i-1];
    int res=0;
    for(int i=0;i<n-1;i++)
    {
        mul=mul/(n-i);
        res+=count[str[i]-1]*mul;
        for(int j=str[i];j<MAX;j++)
            count[j]--;
    }
    return res+1;
}
int main()
{
    // string str="string";
    string str="dcba";
    int res=lexRank(str);
    cout<<"\nlexicographic rank of "<<" "<<str<<" is "<<res<<endl;
    return 0;
}