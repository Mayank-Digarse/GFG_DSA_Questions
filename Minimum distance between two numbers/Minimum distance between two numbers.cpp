
class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
    
        int prev = -1;
        int dist = INT_MAX;
        for(int i =0 ; i<n; i++){
            if(a[i] == x || a[i] == y){
                if(prev != -1 && a[prev] != a[i]){
                    dist = min(dist , i-prev);
                }
                prev = i;
            }
        }
        if(dist == INT_MAX){
            return -1;
        }
        return dist;
    }
};
