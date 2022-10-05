class Solution {
  public:
    int closestNumber(int N , int M) {
        // code here
        int i = N;
        int j = N;
        while(1){
            if(i%M == 0){
                return i;
            }
            else i--;
            if(j%M == 0){
                return j; 
            }
            else j++;
        }
    }
};
