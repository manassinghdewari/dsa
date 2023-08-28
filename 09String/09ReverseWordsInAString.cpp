#include<bits/stdc++.h>
using namespace std;

void reverse1(string & str,int low , int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
void removeExtraSpace(string &str)
{
    int n=str.length();
    string str1;
    int first=true;
    for(int i=0;i<n;i++)
    {
        if(first && str[i]!=' ')
        {
            str1.push_back(str[i]);
            first=false;
        }
        else if(!first && (( str[i]==' ' && str[i+1] !=' ') || str[i]!=' '))
            str1.push_back(str[i]);
    }    
    str=str1;
}
void reverseWords(string & str)
{
    int length=str.length();
    int start=0;
    for(int i=0;i<length;i++)
    {
        if(str[i]==' ')
        {
            reverse1(str,start,i-1);
            start=i+1;
        }
    }
    reverse1(str,start,length-1);
    // till now all the individual words gets reversed
    // now will reverse the all line 
    reverse1(str,0,length-1);
    removeExtraSpace(str);
}
int main()
{
    string str="   Welcome to GFG  ";
    reverseWords(str);
    cout<<"\nstring after reverse \n"<<str;
    return 0;
}