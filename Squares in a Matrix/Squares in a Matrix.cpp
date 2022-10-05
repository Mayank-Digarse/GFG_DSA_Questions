class Solution {
  public:
    long long squaresInMatrix(int m, int n) {
        // code here
        long long count = m*n;
        while((m-1)&&(n-1)){
            count+=(m-1)*(n-1);
            m--;
            n--;
        }
        return count;
    }
};
