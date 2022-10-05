class Solution {
  public:
    int pairCubeCount(int N) {
        // code here
        int count = 0;
        for(int i = 0 ;i<= cbrt(N) ; i++){
            for(int j = 1 ;j <= cbrt(N) ; j++){
                
                if(i*i*i+ j*j*j == N)
                count++;
            }
        }
        
        return count;
    }
};
