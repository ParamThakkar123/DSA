class Solution
{
    public:
    
    int posOfRightMostDiffBit(int m, int n)
    {
        if(m == n) return -1;
        int count = 1;
        while(!((m & 1) ^ (n & 1))){
            m >>= 1;
            n >>= 1;
            count++;
        }
        return count;
    }
};
