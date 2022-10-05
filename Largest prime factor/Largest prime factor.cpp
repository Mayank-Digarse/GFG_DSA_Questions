class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        for(int i = 2; i<=sqrt(N) ; i++){
            while(N%i == 0 || N!=i){
                N=N/i;
            }
            return N;
        }
        
    }
};
