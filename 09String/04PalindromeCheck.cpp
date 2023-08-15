#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int begin=0,last=str.length()-1;
    while(begin<last)
    {
        if(str[begin]!=str[last])
            return false;
        begin++;
        last--;
    }
    return true;
}
int main()
{
    string str="ABCDEF";
    bool res=isPalindrome(str);
    (res)? cout<<"\nString is palindrome" : cout<<"\nString is not palindrome";
    return 0;
}