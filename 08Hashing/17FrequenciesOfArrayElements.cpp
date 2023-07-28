#include <unordered_map>
#include <iostream>
using namespace std;

void countFreq(int arr[], int n)
{
    unordered_map<int, int> h;
    for (int i=0;i<n;i++)
        h[arr[i]]++;
    for (auto e : h)
        cout << "\n"
             << e.first << " " << e.second << "\n";
}

int main()
{
    int arr[] = {50, 50, 10, 40, 10};
    countFreq(arr, 5);
    return 0;
}

// TC=)(n)
// SC=O(n)