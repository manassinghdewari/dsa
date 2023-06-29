// constraint n=10^5 the maximum bits=17

class Solution{
    static int num_with_bits_set(int pattern,int arr[],int N)
    {
        int count=0;
        for(int i=0;i<N;i++)
        {
            if((arr[i] & pattern) ==pattern)
                count ++;
        }
        return count;
    }
    public static int maxAND(int arr[],int N){
        int res=0;
        for(int i=31;i>=0;i--)
        {
            int count = num_with_bits_set(res | (1<<i),arr,N);
            if(count >=2)
                res = res | (1 << i);
        }
        return res;
    }
}
