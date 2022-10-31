
class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int start = 0;
        int end = n-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(k == arr[mid]){
                return mid;
            }
            else if(k <arr[mid]){
                end = mid-1;
            }
            else {
                start = mid+1;
            }
      
        }
        return -1;
    
    }
};
