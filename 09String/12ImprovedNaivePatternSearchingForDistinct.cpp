// for this approch we have given that all the elements of the pattern are distinct

#include<bits/stdc++.h>
using namespace std;
void patternSearchDist(string &pattern, string &txt)
{
    int n=txt.length();
    int m=pattern.length(),j;
    for(int i=0;i<n-m+1;)
    {
        for(j=0;j<m;j++)
            if(pattern[j]!=txt[i+j])
                break;
        if(j==m)
            cout<<" "<<i<<" ";
        if(j==0)
            i++;
        else
            i=i+j;
    }
}
int main()
{
    string pattern="ABCD";
    string txt="ABCEABEFABCD";
    patternSearchDist(pattern,txt);
    return 0;
}