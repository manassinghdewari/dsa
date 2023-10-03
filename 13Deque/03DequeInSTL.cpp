// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     deque<int>dq={10,20,30};
//     dq.push_front(5);
//     dq.push_back(50);
//     for(auto x: dq)
//         cout<<x<<" ";
//     cout<<"\n Front: "<<dq.front()<<" ";
//     cout<<"\n Back: "<<dq.back()<<" ";   
//     dq.pop_front();
//     dq.pop_back();
//     cout<<"\n Front: "<<dq.front()<<" ";
//     cout<<"\n Back: "<<dq.back()<<" ";  
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq={10,15,30,5,12};
    auto it=dq.begin();
    it++;
    dq.insert(it,20);
    dq.pop_front();
    dq.pop_back();
    for(auto x: dq)
        cout<<x<<" ";
    cout<<"\n"<<dq.size();
    return 0;
}