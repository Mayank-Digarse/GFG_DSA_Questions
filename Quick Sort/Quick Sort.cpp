class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if(low<high){
            int p = partition(arr, low , high);
            quickSort(arr, low , p-1);
            quickSort(arr , p+1 , high);
        }
       return ; 
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
       int i = low , j = low;
       int x = arr[high];
       while(j<high){
           if(arr[j] >arr[high])j++;
           else swap(arr[i++] , arr[j++]);
           
       }
       swap(arr[i] , arr[high]);
       return i;
    }
};
