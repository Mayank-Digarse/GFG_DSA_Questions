class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            unordered_set<char> s1;
            unordered_set<char> s2;
            set<char>s3;
            
            string st;
            for(int i =0 ;i<A.size(); i++){
                s1.insert(A[i]);
            }
            for(int i = 0;i<B.size(); i++ ){
                s2.insert(B[i]);
            }
            for(int i=0; i<A.size(); i++){
                if(s2.find(A[i]) == s2.end()){
                    s3.insert(A[i]);
                }
            }
            for(int i=0; i<B.size(); i++){
                if(s1.find(B[i]) == s1.end()){
                    s3.insert(B[i]);
                }
            }
            for(auto it: s3){
                st.push_back(it);
            }
            if(st.size() == 0){
                return "-1";
            }
            return st;
        }
};
