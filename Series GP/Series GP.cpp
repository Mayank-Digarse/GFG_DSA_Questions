class Solution{
	public:
   	int Nth_term(int a, int r, int n){
   	    // Code here
   	      int modulo = 1000000007;
        long long int ans = (a*pow(r, n-1))%modulo;
        return ans;
   	}    
};
