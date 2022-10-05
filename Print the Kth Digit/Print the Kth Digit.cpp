class Solution{
public:
    int kthDigit(int A,int B,int K){
        // code here
        long long x = pow(A,B);
        int rem =0;
        for(int i = 0; i<K ;i++)
        {
            rem = x%10;
            x = x/10;
        }
        return rem;
    }
};
