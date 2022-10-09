class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        int count = 0;
        sort(arr , arr+n);
        
        for(int i =0 ;i<n-2; i++){
            for(int j = i+1; j<n-1; j++){
                int k = j+1;
                while( k<n && arr[i]+arr[j] >arr[k]){
                    k++;
                    count++;
                }
            }
        }
        return count;
    }
};
