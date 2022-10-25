class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        //code here.
        int num = 0, max = -1;
        for(int i = 0; i< S.size(); i++){
            if(S[i] >=48 && S[i]<=57){
                num = num*10+(S[i]-'0');
                if(num > max){
                    max = num;
                }
            }
            else num = 0;
        }
        return max;
    } 
};
