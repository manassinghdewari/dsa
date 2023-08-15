// #include<bits/stdc++.h>
// using namespace std;
// const int CHAR=256;
// int leftMost(string &str)
// {
//     int count[CHAR]={0};
//     for(int i=0;i<str.length();i++)
//         count[str[i]]++;
//     for(int i=0;i<str.length();i++)
//         if(count[str[i]]>1)
//             return i;
//     return -1;
// }
// int main()
// {
//     string str="abccbd";
//     int res=leftMost(str);
//     (res)? cout<<"\n"<<res : cout<<"\nNoone is repeating"; 
//     return 0; 
// }

//*************** Efficient approach -1*******************//


// in this example we using the charaaacter ASCII values to 
// use as an index
// #include<bits/stdc++.h>
// using namespace std;
// const int CHAR=256;
// int leftMost(string &str)
// {
//     int fIndex[CHAR];
//     fill(fIndex,fIndex+CHAR,-1);
//     int res=INT_MAX;
//     for(int i=0;i<str.length();i++)
//     {
//         int fi=fIndex[str[i]];
//         if(fi==-1)
//             fIndex[str[i]]=i;
//         else    
//             res=min(res,fi);
//     }
//     return (res==INT_MAX) ? -1 : res;
// }
// int main()
// {
//     string str="aabccbd";
//     int res=leftMost(str);
//     cout<<"\nanswer:"<<res; 
//     return 0; 
// }



// most efficent solution 

#include<bits/stdc++.h>
using namespace std;

const int MAX=256;
int leftMost(string str)
{
    bool visited[MAX];
    fill(visited,visited+MAX,false);
    int res=-1;
    for(int i=str.length();i>=0;i--)
    {
        if(visited[str[i]])
            res=i;
        else
            visited[str[i]]=true;
    }
    return res;
}
int main()
{
    // string str="aabccbd";
    // string str="abcd";
    string str="abccbd";
    int res=leftMost(str);
    cout<<"\nanswer:"<<res; 
    return 0; 
    return 0;
}