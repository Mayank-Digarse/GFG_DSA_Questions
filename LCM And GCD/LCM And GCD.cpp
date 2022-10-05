class Solution {
  public:
    long long hcf(long long A , long long B){
        if(A == 0) return B;
        return hcf(A%B , A);
    }
  
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        long long hc = hcf(A , B);
        long long lc = A/hc;
        vector<long long> v;
        lc = (long long)B*lc;
        v.push_back(lc);
        v.push_back(hc);
        return v;
    }
};
