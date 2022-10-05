class Solution{
public:
    long long int factorial(int N){
        //code here
        if(N==1 || N == 0){
            return 1;
        }
        return N*factorial(N-1);
    }
};
