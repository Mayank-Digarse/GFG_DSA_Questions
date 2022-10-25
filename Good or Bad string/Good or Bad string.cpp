class Solution {
  public:
    int isGoodorBad(string S) {
        // code here
        int v = 0;
        int c = 0;
        for(int i = 0; i<S.size() ;i++){
            if(S[i] == 'a' ||S[i] == 'e' ||S[i] == 'i' ||S[i] == 'o' ||S[i] == 'u'){
                
                v++;
                c = 0;
                
            }
            else if(S[i] == '?'){
                
                v++;
                c++;
            }
            else{
                
                c++;
                v = 0;
            
            }
            if(c>3 || v>5) return 0;
        }
        return 1;
    }
};
