class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    sort(arr , arr+n);
	        int i = 0; 
	        while(i<n){
	            if(arr[n-1] != arr[n-1-i]){
	                return arr[n-1-i];
	            }
	         else{
	               i++ ;
	            }
	        }
	    
	    return -1;
	}
};
