class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        int s = 0;
        int e = n-1;
        int result = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(v[mid] == x){
                return mid;
            }
            else if(v[mid] < x){
                result = mid;
                s = mid+1;
            }
            else if(v[mid]>x){
                e = mid-1;
            }
            
        }
        return result;
        
    }
};
