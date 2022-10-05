class Solution{
public:
    int isPrime(int N){
        // code here
        if(N==1) return 0;
        int cnt = 0; 
        for(int i = 1; i<= sqrt(N) ; i++){
            if(N%i == 0){
                cnt++;
            }
        }
        if(cnt>=2) return 0;
        return 1;
    }
};
