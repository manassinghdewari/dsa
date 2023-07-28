// unordered map in c++ STL

// used to store key,value,pairs
// usese hashing
// No order of 

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    m["gfg"]=20;
    m["ide"]=30;
    m.insert({"courses",15});
    for(auto x :m)
        cout<<x.first <<" "<<x.second<<"\n";
    
    cout<<"find function call start \n";
    auto it=m.find("ide");
    // m.end() point to the next value of last
    if(it!=m.end())
        cout<<"Found  "<<it->second<<"\n";
    else
        cout<<"Not FOund\n";

    cout<<"COUNT function call start \n";
    // it returns one if element is present
    // return 0 if not present
    if(m.count("ide")>0)
        cout<<"\n FOund";
    else
        cout<<"\n Not FOund";

    cout<<"\n size and erase function call start \n";
    cout<<"size of the unordered_map"<<m.size()<<"\n";
    m.erase("ide");
    m.erase(m.begin());
    cout<<"size of the unorderd_map"<<m.size()<<"\n";
    return 0;
}

// all are  O(1) operations
// ansds for like find and count it is avg O(1)