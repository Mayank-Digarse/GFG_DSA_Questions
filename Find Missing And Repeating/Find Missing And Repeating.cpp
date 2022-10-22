class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans;
        for(int i =0 ; i<n;i++){
            int x = abs(arr[i])-1;
             if(arr[x] <0){
            ans[0] = x+1;
        }
        else{
            arr[x]*= -1;
        }
        }
       
        for(int i = 0; i<n; i++){
            if(arr[i] > 0){
                ans[1] = i+1;
            }
        }
        return ans;
    }
};
