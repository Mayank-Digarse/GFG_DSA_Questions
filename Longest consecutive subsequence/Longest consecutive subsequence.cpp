//Brute Force Approach//

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      sort(arr , arr+N);
      int cnt = 1;
      int ans = 1;
      for(int i =0 ; i<N-1; i++){
          if(arr[i]+1 == arr[i+1]){
              cnt++;
          }
          else if(arr[i] == arr[i+1]){
             
         }
          else{
              cnt = 1;
          }
          ans = max(ans,cnt);
      }
      
      return ans;
    }
};

//Optimised Approach

