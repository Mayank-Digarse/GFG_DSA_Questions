class Solution {
  public:
    int isPerfectNumber(long long N) {
        // code here
        int sum = 1;
        if(N == 1){
            return 0;
        }
        
        for(int i = 2; i<=sqrt(N) ;i++){
            if(N%i == 0){
             sum = sum+i+N/i;
               
            }
        }
        if(sum == N) return 1;
        else return 0;
        
    }
};
