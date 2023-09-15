#include<bits/stdc++.h>
using namespace std;


bool isMatching(char a,char b)
{
    return((a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']'));

}
bool isBalanced(string str)
{
    stack<int>s;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            s.push(str[i]);
        else
        {
            if(s.empty())
                return false;
            else if(isMatching(s.top(),str[i])==false)
                return false;
            else    
                s.pop();
        }
    }
    return (s.empty());
}

int main()
{
    // string s="([])";
    // string s="((())";
    string s="[{]}";
    int ans=isBalanced(s);
    (ans) ? cout<<"\n It is balanced" : cout<<"\nIt is not balanced";
    return 0;
}