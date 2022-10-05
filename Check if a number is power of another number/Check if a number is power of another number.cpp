class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
        // code here 
    for(int i = 0 ;i<= Y; i++){
        if(pow(X, i) == Y){
            return 1;
            break;
        }
    }
    return 0;
    }   
};
