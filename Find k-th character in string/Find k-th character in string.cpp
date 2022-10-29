class Solution{
public:		
	
	char kthCharacter(int m, int n, int k)
	{
        string str;
        if(m == 0) str +="0";
        while(m!=0){
            str+=to_string(m%2);
            m=m/2;
        }

	   reverse(str.begin(), str.end());
	   for(int i = 0; i<n;i++){
	     string temp = "";
	     for(int j =0; j<str.length(); j++){
	         if(str[j] == '0') temp+="01";
	         else temp += "10";
	     }
	     str = temp;
	 }
	  return str[k-1] ;
	}
};
