class Solution
{
    public:
    int select(int arr[], int i)
    {
        // code here such that selectionSort() sorts arr[]
        return 0;
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       int minidx , i;
       for(int i =0; i<n-1;i++){
           minidx = i ;
           for(int j = i+1; j<n; j++){
               if(arr[minidx] >arr[j])
               {
                   minidx= j;
               }
           }
           swap(arr[minidx] , arr[i]);
       }
    }
};
