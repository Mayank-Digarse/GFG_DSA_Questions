class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int largest = INT_MIN;
	    int secondlargest = INT_MIN;
	    for(int i = 0; i<n; i++){
	        if(arr[i]>largest){
	            secondlargest = largest;
	            largest = arr[i];
	        }
	        else{
	            if(arr[i]>secondlargest && arr[i] < largest){
	                secondlargest = arr[i];
	            }
	            if(secondlargest == INT_MIN){
	                return -1;
	            }
	        }
	       
	    }
	    return secondlargest;
	}
};
