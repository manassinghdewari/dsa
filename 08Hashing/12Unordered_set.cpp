// unordered set in stl

//IMported functions
// begin() 
// end()
// above two function works in O(1)
// insert()
// size()
//find()
// count()
// above 4 function works in O(1) avg

// unordered set in stl works only in keys 

// unordered map in stl works only in keys and values


#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);
    for(auto it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<"\n";
    cout<<"size of unorderd set"<<s.size()<<"\n ";
    // s.clear();
    cout<<"size after clear"<<s.size()<<"\n ";
    // if element is present then it will return address of 
    // that element otherwise it will return s.end() 
    if(s.find(15) == s.end())
        cout<<"Not Found"<<"\n";
    else 
        cout<<"Found"<<"\n"<<"element"<<*(s.find(15))<<"\n";
    // count return 1 if element is present
    // it returns 0 if not present
    if(s.count(15))
        cout<<"Found"<<"\n";
    else 
        cout<<"Not Found"<<"\n";
    s.erase(15);
    cout<<"\nafter erase 15  "<<s.size();
    auto it= s.find(10);
    s.erase(it);
    cout<<"\nafter erase 15  "<<s.size();
    // we can use erase elements in range also
    s.erase(s.begin(),s.end());
    cout<<"\nafter range erase  "<<s.size();
    return 0;
}