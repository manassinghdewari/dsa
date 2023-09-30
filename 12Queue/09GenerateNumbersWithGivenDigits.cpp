#include<bits/stdc++.h>
using namespace std;

void printFirstN(int n)
{
    queue<string> q;
    q.push("5");
    q.push("6");
    for(int i=0;i<n;i++)
    {
        string temp=q.front();
        cout<<temp <<" ";
        q.pop();
        q.push(temp+"5");
        q.push(temp+"6");
    }

}
int main()
{
    printFirstN(10);
    return 0;
}