class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int A[], int N) 
    { 
        // Your code here
        int maxIndex = 0;
        for(int i = 0; i<N ;i++){
            for(int j = N-1; j>0; j--){
                if(A[i]<=A[j]){
                    int ans = j-i;
                    maxIndex = max(ans , maxIndex);
                    break;
                }
            }
        }
        return maxIndex;
    }
};
