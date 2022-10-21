class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
    int s = 0;
    
    int e = n-1;
    int cnt = 0;
    
    while(s<e){
        if(arr[s] + arr[e] == sum){
            cnt++;
            s++;
            e--;
        }
        else if(arr[s]+arr[e] <sum){
            s++;
        }
        else {
            e--;
        }
        
    }
    if(cnt == 0) {
        return -1;
    }
    return cnt;
        
    }
};
