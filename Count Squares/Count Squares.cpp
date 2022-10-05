class Solution {
  public:
    int countSquares(int N) {
        // code here
        int cnt = 0;
        for(int i = 1; i < sqrt(N) ;i++){
            cnt++;
        }
        return cnt;
    }
};
