class Solution{
public:	
	// Returns count buildings that can see sunlight
	int countBuildings(int h[], int n) {
	    // code here
	    int cur_max = h[0];
	    int cnt = 1;
	    for(int i = 1 ;i<n; i++){
	        if(h[i]>cur_max){
	            cnt++;
	            cur_max = h[i];
	        }
	    }
	    return cnt;
	}
};
