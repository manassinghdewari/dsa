#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"\nFront"<<q.front()<<" "<<q.back()<<endl;
    q.pop();
    cout<<"\nFront"<<q.front()<<" "<<q.back()<<endl;
    return 0;
}