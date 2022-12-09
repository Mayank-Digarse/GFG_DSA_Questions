
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        unordered_map<ll , ll> mp;
        for(int i = 0; i<N; i++){
            mp[A[i]]++;
            mp[B[i]]--;
        }
       for(auto x:mp){
           if(x.second !=0)
           return false;
       }
       return true;
    }
};
