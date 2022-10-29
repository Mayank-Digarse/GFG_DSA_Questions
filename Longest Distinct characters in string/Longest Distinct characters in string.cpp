int longestSubstrDistinctChars (string S)
{
    vector<int> mpp(256,-1);
    int left = 0, right = 0, len = 0;
    int n = S.size();
    
    while(right<n){
        if(mpp[S[right]] != -1) left = max(mpp[S[right]]+1, left);
        mpp[S[right]] = right;
        
        len = max(len , right-left+1);
        right++;
    }
    return len;
}
