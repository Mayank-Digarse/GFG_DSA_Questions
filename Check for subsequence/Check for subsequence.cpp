class Solution{
    public:
    bool isSubSequence(string A, string B) 
    {
        // code here
        int j = 0;
        for(int i = 0; i<B.size() ; i++){
           
                if(B[i] == A[j])j++;
                if(j == A.size())return true;
            
        }
        return false;
    }
};
