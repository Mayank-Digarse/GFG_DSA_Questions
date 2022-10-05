
class Solution{
public:
    int fact(int N){
        if(N==1 || N==0){
            return 1;
        }
        return N*(N-1);
    }

    long long nPr(int n, int r){
        // code here
        int x = fact(n);
        int y = fact(n-r);
        int ans = x/y;
        return ans;
    }
};
