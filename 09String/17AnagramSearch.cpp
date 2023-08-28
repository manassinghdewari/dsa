#include<bits/stdc++.h>
using namespace std;
const int CHAR=256;
// it is different from previous implementation
// previous implementation is only applicable for basic anagram check
// now here we are checking for pattern matching of pattern with a given text
// pattern order can be different from original order but there should not be any gap between them
// we will use sliding window based approach
// we will maintain two array CP AND CT
// at first we will increment the number of characters in both the array till the length of the pattern

// then we will check if the are same then we will return true 
// otherwise we will decrement the count of first element by one 
// and we add the count of next element
bool areSame(int CT[],int CP[],string pattern)
{
    cout<<"areSame: "<<pattern<<endl;
    for(int i=0;i<pattern.size();i++)
    {
        if(CP[pattern[i]]!=CT[pattern[i]])
            return false;
    }
    return true;
}

bool checkAnagram(string text,string pattern)
{
    int CT[CHAR]={0};
    int CP[CHAR]={0};
    for(int i=0;i<pattern.length();i++)
    {
        CP[pattern[i]]++;
        CT[text[i]]++;
    }
    for(int i=pattern.length();i<text.length();i++)
    {
        if(areSame(CT,CP,pattern))
        {

            return true;
        }
        CT[text[i]]++;
        CT[text[i-pattern.length()]]--;
    }
    return false;
}
int main()
{
    string text="geeksforgeeks";
    string pattern="rseek";
    if(checkAnagram(text,pattern))
        cout<<"\nAnagram Search Found!"<<endl;
    else
        cout<<"Anagram Search Not Found!"<<endl;
    return 0;
}