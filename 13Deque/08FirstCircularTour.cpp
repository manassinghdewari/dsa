// // Naive Solution

// #include<bits/stdc++.h>
// using namespace std;

// int firstPetrolPump(int petrol[],int dist[],int n)
// {
//     for(int start=0;start<n;start++)
//     {
//         int cur_petrol=0;
//         int end=start;
//         while(true)
//         {
//             cur_petrol+=(petrol[end]-dist[end]);
//             if(cur_petrol<0)
//                 break;
//             end=(end+1)%n;
//             if(start==end)
//                 return start+1;   
//         }
//     }
//     return -1;
// }
// int main()
// {
//     int petrol[]={8,9,4};
//     int dist[]={5,10,12};
//     int ans=firstPetrolPump(petrol,dist,3);
//     cout<<"\nAnswer is "<<ans;
//     return 0;
// }


// Efficient Solution

#include<bits/stdc++.h>
using namespace std;

int firstPetrolPump(int petrol[],int dist[],int n)
{
    int start=0,cur_petrol=0,prev_petrol=0;
    for(int i=0;i<n;i++)
    {
        cur_petrol+=petrol[i]-dist[i];
        if(cur_petrol<0)
        {
            start=i+1;
            prev_petrol+=cur_petrol;
            cur_petrol=0;
        }
    }
    if((cur_petrol+prev_petrol )>=0)
        return start+1;
    else
        return -1;
}

int main()
{
    int petrol[]={50,10,60,100};
    int dist[]={30,20,100,10};
    int ans=firstPetrolPump(petrol,dist,4);
    cout<<"\nAnswer is "<<ans;
    return 0;
}