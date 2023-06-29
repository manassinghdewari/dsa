// obtain the even bits and shift these to odd positions.
// obtain the odd bits and shift these to even positions.
// combine the shifted values of odd and evene bits

// let input number be x
// obtain and shift even bits:
// 1.m(Even_bits)=x & 0xAAAAAAAA;
// bcz A means 10 and 10 has all the set bit in the odd positon
// right shift m by 1:m=m>1

// similarly for odd bits,obtain and shift odd bits to even posiotns.
 
//  here will use 5 becuse 5 has all the set bit in the even position
// 1 - n(odd_bits) = x&0x55555555;
// left shift n (shifting odd bits to even positions)
// n=n<<1;


// example x=23

// x=23 0x00010111
// bitwise & operation with (0xAA) = 0x10101010
// we get m=x&(0xAA)
// m=0x00000010
// m=m>>1 
// m=0x00000001

// simiarly for odd bits obtain and shift odd bits to even positons
// x=23 0x00010111
// bitwise & operation with (0x55) =>0x01010101
// we get n=x&0x55
// n=0x00010101
// n=n<<1
// now n=0x00101010

// now final result come by combining the result m and n

// m=0x00000001
// n=0x00101010
// output=>0x00101011 =>43 output

//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n)
    {
    	unsigned int x=n&0xAAAAAAAA;
    	x=x>>1;
    	unsigned int y=n&0x55555555;
    	y=y<<1;
    	return (x | y);
    	
    }
};

