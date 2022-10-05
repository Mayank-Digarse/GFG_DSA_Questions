class Solution
{
public:
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector <int> res;
        vector <int> v(N+1 , 1);
        for(int i = 2 ; i<=N; i++){
            if(v[i]>0){
                res.push_back(i);
                for(int j = i*i ;j<= N; j+=i){
                    v[j] = 0;
                }
            }
        }
        return res;
    }
};
