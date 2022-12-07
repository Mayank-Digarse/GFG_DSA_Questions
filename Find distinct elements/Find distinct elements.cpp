
class Solution{
public:
    int distinct(vector<vector<int>> M, int N)
    {
        // code here
        unordered_map<int, int>m;
        for(int i = 0; i<N; i++){
            for(int j =0 ;j<N; j++){
                if(m[M[i][j]] == i)
                m[M[i][j]] = i+1;
            }
        }
        int cnt = 0; 
        for(auto i:m){
            if(i:second == N)
            cnt++;
        }
        return cnt;
    }
};
