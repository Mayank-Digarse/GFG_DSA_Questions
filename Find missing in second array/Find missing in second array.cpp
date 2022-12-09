class Solution{
	
	
	public:
	vector<long long> findMissing(long long A[], long long B[],  
                 int N, int M) 
	{ 
	    // Your code goes here
	    vector<long long>ans;
	    unordered_map<long long,int>mp;
	    for(int i= 0;i<M ; i++){
	        if(mp[B[i]] == 0){
	            mp[B[i]]++;
	        }
	    }
	    for(int i =0 ;i<N; i++){
	        if(mp[A[i]] == 0){
	            ans.push_back(A[i]);
	        }
	        
	    }
	    return ans;
	} 
};
