// #include<bits/stdc++.h>
// using namespace std;

// bool isSubSeq(string s1,string s2,int n,int m)
// {
//     int j=0;
//     for(int i=0;i<n && j<m;i++)
//         if(s1[i]==s2[j])
//             j++;
//     return (j==m);
// }
// int main()
// {
//     string s1="ABCDEF";
//     string s2="ADE";
//     bool res=isSubSeq(s1,s2,6,3);
//      (res)? cout<<"\nS2 is substring of S1" : cout<<"\nS2 is not substring of S1";
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

bool isSubSeqRecur(string s1,string s2,int n,int m)
{
    if(m==0)
        return true;
    if(n==0)
        return false; 
    if(s1[n-1]==s2[m-1])
        return isSubSeqRecur(s1,s2,n-1,m-1);
    else
        return isSubSeqRecur(s1,s2,n-1,m);
}
int main()
{
    string s1="ABCDEF";
    string s2="ADE";
    bool res=isSubSeqRecur(s1,s2,6,3);
    (res)? cout<<"\nS2 is substring of S1" : cout<<"\nS2 is not substring of S1";
    return 0;
}