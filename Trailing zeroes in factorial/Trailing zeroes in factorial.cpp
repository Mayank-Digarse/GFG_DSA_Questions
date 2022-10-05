class Solution
{
public:
    int trailingZeroes(int N)
    {
        int count = 0; 
        for(int i = 5; i<=N ; i=i*5){
            count += N/i;
        }
        return count;
    }
};
