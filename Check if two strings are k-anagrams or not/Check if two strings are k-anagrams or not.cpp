class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        unordered_map<char,int> m;
        
        int n1 = str1.size();
        int n2 = str2.size();
        
        if(n1 != n2){
            return false;
        }
        int cnt = 0;
        for(int i = 0;i<n1 ;i++){
            m[str1[i]]++;
        }
        for(int i = 0; i<n1 ; i++){
            if(m.find(str2[i]) == m.end()){
                cnt++;
            }
            else{
                if(--m[str2[i]] == 0){
                    m.erase(str2[i]);
                }
            }
        }
        if(cnt <= k){
            return true;
        }
        return false;
    }
};
