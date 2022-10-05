class Solution {
  public:
  int jump(int n){
      string s = to_string(n);
      bool flag = true;
      for(int i = 0; i<s.length()-1; i++){
          if(abs(s[i] - s[i+1])!=1)
          {
              flag = false;
          }
      }
      return flag;
      
  }
  
    long long jumpingNums(long long X) {
        // code here
      while(true){
          if(jump(X)){
              return X;
             X--; 
          }
      }
    }   
     
};
