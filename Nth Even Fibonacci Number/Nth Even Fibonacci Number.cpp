class Solution {
  public:
  
    int m = pow(10 , 9)+7;
    long long int nthEvenFibonacci(long long int N) {
        // code here
        int first = 0;
        int last = 1; 
        int res = 0;
        for(long long int i = 1 ; i<3*N; i++){
            res = (first+last)%m;
            first = last;
            last = res;
        }
        return res%m;
    }
};
