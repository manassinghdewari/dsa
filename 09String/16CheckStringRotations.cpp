#include<bits/stdc++.h>
using namespace std;

bool areRotations(string s1,string s2)
{
    if(s1.length()!=s2.length())    return false;
    string res=s1+s1;
    int reslen=res.length();
    int s2len=s2.length();
    int j=0;
    for(int i=0;i<reslen;i++)
    {
        if(res[i]==s2[j])
            j++;
        else
            j=0;
        if(j==s2len)
            return true;
    }
    return false;
}
int main()
{
    string s1="ABAB";
    string s2="ABBA";

    if(areRotations(s1,s2))
    {
        cout<<"\nRotations is possible";
    }
    else
    {
        cout<<"\nRotations is not possible";
    }
    return 0;
}