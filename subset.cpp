#include <iostream>
using namespace std;
void solve (string ip,string op)
{
    if(ip.length()==0)
    {
        cout<<op<<" ";
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    solve(ip,op1);
    solve(ip,op2);
    return;
}
int main()
{
        solve("ab","");
        cout<<"\n";
        return 0;
}