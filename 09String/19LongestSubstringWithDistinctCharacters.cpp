// #include<bits/stdc++.h>
// using namespace std;

// bool areDistinct(string str,int low,int high)
// {
//     vector<bool>visited(256,false);
//     for(int i=low;i<=high;i++)
//     {
//         if(visited[str[i]])
//             return false;
//         visited[str[i]]=true;
//     }
//     return true;
// }

// int longestSubstring(string str)
// {
//     int res=0;
//     int n=str.length();
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             if(areDistinct(str,i,j))
//             {
//                 res=max(res,j-i+1);
//             }
//         }
//     }
//     return res;
// }
// int main()
// {
//     string str="aaaaabbbbbbccccccghtyy";
//     int ans=longestSubstring(str);
//     cout<<"\nthe longest substring: "<<ans;
//     return 0;
// }


// the above solution was O(n^3)

// now we will do in O(n^2)

// #include<bits/stdc++.h>
// using namespace std;
// int longestSubstringLength(string str)
// {
//     int res=0;
//     int n=str.length();
//     for(int i=0;i<n;i++)
//     {
//         vector<bool> visitor(256,false);
//         for(int j=i;j<n;j++)
//         {
//             if(visitor[str[j]])
//                 break;
//             else
//             {
//                 res=max(res,j-i+1);
//                 visitor[str[j]]=true;
//             }
//         }
//     }
//     return res;
// }
// int main()
// {
//     string str="aaaaabbbbbbccccccghtyy";   
//     // string str="abac";   
//     int ans=longestSubstringLength(str);
//     cout<<"\nthe longest substring: "<<ans;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int longestDist(string str)
{
    int n=str.size(),res=0;
    vector<int>prev(256,-1);
    int i=0;
    for(int j=0;j<n;j++)
    {
        i=max(i,prev[str[j]]+1);
        int maxEnd=j-i+1;
        res=max(res,maxEnd);
        prev[str[j]]=j;
    }
    return res;
}
int main()
{
    string str="aaaaabbbbbbccccccghtyy";   
    // string str="abac";   
    int ans=longestDist(str);
    cout<<"\nthe longest substring: "<<ans;
    return 0;
}