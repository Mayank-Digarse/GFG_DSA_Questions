class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		   long long rev = 0;
		   while(n){
		       rev = rev*10+n%10;
		       n = n/10;
		   }
		   return rev;
		}
};
