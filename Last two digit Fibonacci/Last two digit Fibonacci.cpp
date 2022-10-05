class Solution{
    public:
    int fibonacciDigits(long long N){
        //code here
        long long arr[300];
        arr[0] = 0;
        arr[1] = 1; 
        arr[2] = 1;
        for(int i = 3 ; i<300; i++){
            arr[i] = (arr[i-1]+arr[i-2])%100;
           
        }
         return arr[N%300];
    }
};
