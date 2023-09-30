// #include<bits/stdc++.h>
// using namespace std;

// void reverse(queue<int> &q)
// {
//     stack<int>s;
//     while(!q.empty())
//     {
//         s.push(q.front());
//         q.pop();
//     }
//     while(!s.empty())
//     {
//         q.push(s.top());
//         s.pop();
//     }
// }
// int main()
// {
    
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     reverse(q);
//     while(!q.empty())
//     {
//         cout<<" "<<q.front()<<endl;
//         q.pop();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

void reverse(queue<int> &q)
{
    if(q.empty())
        return;
    int x=q.front();
    // pop removes item from front
    q.pop();
    reverse(q);
    q.push(x);
}

int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reverse(q);
    while(!q.empty())
    {
        cout<<" "<<q.front()<<endl;
        q.pop();
    }
    return 0;
}