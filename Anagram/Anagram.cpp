class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        int i , j;
        
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());
        if(a.length() != b.length()){
            return false;
        }
        else{
            for(int i = 0;i <a.length(); i++){
                if(a[i]!=b[i])
                return false;
            }
            return true;
        }
        
      
        
    }

};
