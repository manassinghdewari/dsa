
// list is the class which is used for doubly linked list

// struct MyHash
// {
//     int BUCKET;
//     list <int> *table;
//     MyHash(int b)
//     {
//         BUCKET=b;
//         table=new list<int>[b];
//     }
//     void insert(int key){}
//     bool search(int key){}
//     void remove(int key){}
// };

#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    int BUCKET;
    list<int> *table;
    MyHash(int b)
    {
        BUCKET = b;
        table = new list<int>[b];
    }
    void insert(int key)
    {
        int i = key % BUCKET;
        table[i].push_back(key);
    }
    void remove(int key)
    {
        int i = key % BUCKET;
        table[i].remove(key);
    }
    bool search(int key)
    {
        int i = key % BUCKET;
        for (int x : table[i])
        {
            if (x == key)
            {
                return true;
            }
        }
        return false;
    }
};
int main()
{
    MyHash myHash(7);
    int in;
    std::cout << "enter the value\n";
    for (int i = 0; i < 7; i++)
    {
        std::cin >> in;
        myHash.insert(in);
    }

    std::cout << "enter the index\n";
    int index;
    std::cin >> index;
    list<int> l = myHash.table[index];
    for (int ele : l)
    {
        std::cout << ele << " ";
    }

    int elem;
    std::cout << "enter the elemet to searchh \n";
    std::cin >> elem;
    std::cout << "it is present" << myHash.search(elem);

    return 0;
}