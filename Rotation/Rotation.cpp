class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
	    int s = 0;
	    int e = n-1;
	    
	    
	    while(s<=e){
	        if(arr[s] < arr[e]){
	            return s;;
	        }
	        int mid = s+(e-s)/2;
	    int next = (mid+1)%n;
	    int prev = (mid+n-1)%n;
	       if(arr[mid] <= arr[next] && arr[mid] <= arr[prev]){
	           return mid;
	       }
	      if(arr[s] <= arr[mid]){
	           s = mid+1;
	       }
	      else if(arr[mid] <= arr[e]){
	           e = mid-1;
	       }
	        
	    }
	    return 0;
	}

};
