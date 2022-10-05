class Solution{
public:
int mod = 1e9+7;
    int fact(int N){
        if(N == 1 ||  N == 0){
            return 1;
        }
        return N*fact(N-1);
    }
    
    int nCr(int n, int r){
        // code here
        return fact(n)/(fact(n-r)*fact(r))%mod;
        
    }
};
