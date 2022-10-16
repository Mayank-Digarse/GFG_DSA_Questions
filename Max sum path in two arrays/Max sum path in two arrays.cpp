class Solution{
    public:
    /*You are required to complete this method*/
     int max_path_sum(int A[], int B[], int l1, int l2)
    {
        int i = 0 , j = 0, sum1 = 0 , sum2 = 0;
        int maxSum = 0; 
        while(i <l1 && j <l2){
            if(A[i] <B[j]){
                sum1 +=A[i++];
            }
            else if(A[i] > B[j]){
                sum2 +=B[j++];
            }
            else{
            int maxEle = max(sum1 , sum2);
            maxSum += maxEle;
            maxSum += A[i++];
            j++;
            sum1 = sum2 = 0;
        }
        }
        while(i<l1){
            sum1 += A[i++];
        }
        while(j<l2){
            sum2 +=B[j++];
        }
        maxSum +=max(sum1 , sum2);
        return maxSum;
    }
};
