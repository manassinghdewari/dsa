#include<bits/stdc++.h>
using namespace std;

void patSearching(string &txt,string &patrn)
{
    int n=patrn.length();
    int m=txt.length(),j;
    for(int i=0;i<m-n+1;i++)
    {
        for(j=0;j<n;j++)
        {
            if(patrn[j]!=txt[i+j])
            {
                break;
            }
        }
        if(j ==n)
            cout<<"\t"<<i<<"\t";
    }
}
int main()
{
    string pattern="AAA";
    string txt="AAAAA";
    patSearching(txt,pattern);
    return 0;
}