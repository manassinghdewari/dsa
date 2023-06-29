// given n ranges find the max appearing element in 
// thier ranges

// methasore

// i/p: L[]={1,2,5,15}
// R[]={5,8,7,18}
// o/p: 5

// 1-5 {1,2,3,4,5}
// 2-8 {2,3,4,5,6,7,8}
// 5-6 {5,6,7}
// 15-18 {15,16,17,18}

// will create a hash table

// assume 0<=L[i],R[i]<1000

// #include<bits/stdc++.h>

// int maxOccured(int L[],int R[],int n)
// {
//     vector<int> arr[1000];
//     for(int i=0;i<n;i++)
//     {
//         arr[L[i]++];
//         arr[R[i]+1];
//         int maxm=arr[0],res=0;
//         for(int i=1;i<1000;i++)
//         {
//             arr[i]+=arr[i-1];
//             if(maxm<arr[i]) 
//             {
//                 maxm=arr[i];
//                 res=i;
//             }
//         }
//         return res;
//     }
// }

// using namespace std;

// int main()
// {

//     return 0;
// }