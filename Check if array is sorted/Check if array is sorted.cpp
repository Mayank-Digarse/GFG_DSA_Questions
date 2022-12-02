class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        int i = 0; 
        while(i<n){
            if(arr[i]>arr[i+1])return 0;
            else i++;
        }
        
        return 1;
    }
};
