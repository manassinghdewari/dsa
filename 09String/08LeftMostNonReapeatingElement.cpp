// first efficient implementation
// using two iterations

// #include<bits/stdc++.h>
// using namespace std;
// const int MAX=256;
// int nonRepating(string str)
// {
//     int count[MAX];
//     fill(count,count+MAX,0);
//     for(int i=0;i<str.length();i++)
//     {
//         count[str[i]]++;
//     }
//     for(int i=0;i<str.length();i++)
//     {
//         if(count[str[i]] ==1)
//             return i;
//     }
//     return -1;
// }
// int main()
// {
//     string s1="abcabc";
//     int res=nonRepating(s1);
//     cout<<"\n left most non repeating index is"<<res<<endl;
//     return 0;
// }


// 2 efficent implementation 
// using two iterations


#include<bits/stdc++.h>
using namespace std;
const int MAX=256;
int nonRepating(string str)
{
   int firstIndex[MAX];
   fill(firstIndex,firstIndex+MAX,-1);
   for(int i=0;i<str.length();i++)
   {
    if(firstIndex[str[i]]==-1)
        firstIndex[str[i]]=i;
    else 
        firstIndex[str[i]]=-2;
   }
   int res=INT_MAX;
   for(int i=0;i<MAX;i++)
   {
        if(firstIndex[i]>0)
            res=min(res,firstIndex[i]);
   }
   return (res==INT_MAX) ? -1:res;
}
int main()
{
    string s1="geeksforgeeks";
    int res=nonRepating(s1);
    cout<<"\n left most non repeating index is"<<res<<endl;
    return 0;
}