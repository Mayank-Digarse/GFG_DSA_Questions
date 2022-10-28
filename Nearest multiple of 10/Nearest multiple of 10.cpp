class Solution{
    public:
    string roundToNearest(string N) 
    { 
       int n = N.size();
       if(N[n-1] <='5'){
           N[n-1] = '0';
           return N;
       }
       N[n-1] = '0';
       int i = n-2;
       while(i>=0 && N[i] == '9'){
           N[i] = '0';
           i--;
       }
       if(i<0)
       N.insert(0 , "1");
       else 
       N[i]++;
       return N;
    }  

};
