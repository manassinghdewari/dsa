#include<bits/stdc++.h>
using namespace std;
const int MAX=256;
bool checkAnagram(string &s1,string &s2)
{
    if(s1.length()!=s2.length())
        return false;
    int count[MAX]={0};
    for(int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<MAX;i++)
    {
        if(count[i]!=0)
            return false;
    }
    return true;
}
int main()
{
    string s1="aabca",s2="acaba";
    bool res=checkAnagram(s1,s2);
    (res)? cout<<"\nIt is anagram" : cout<<"\nIt is not anagram";
    return 0;
}