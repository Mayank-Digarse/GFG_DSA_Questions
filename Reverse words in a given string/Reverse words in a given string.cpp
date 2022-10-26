class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
       
      string S2; 
      int r; 
      int len = S.length();
      for(int i=len-1; i>=0 ; i--){
          if(S[i] == '.'){
              r = len-i;
              len = i-1;
              S2.append(S.substr(i+1 , r));
              S2.append(".");
          }
      }
        S2.append(S.substr(0 , len+1));
        return S2;
    } 
};
