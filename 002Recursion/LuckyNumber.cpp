// to find a lucky number

// gfg problem

#include <bits/stdc++.h>
using namespace std;


// n is also working as index number also.
// bcz n index is changing in the pattern of
// n=n-n/counter

bool isLucky(int n)
{
    static int counter = 2;
    if (counter > n)
        return 1;
    if (n % counter == 0)
        return 0;
    n = n - n / counter;
    counter++;
    return isLucky(n);
}
int main()
{
    cout << "nmber is lucky ? :" << isLucky(19) << "::\n";

    return 0;
}