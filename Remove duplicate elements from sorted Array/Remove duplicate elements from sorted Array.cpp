class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int i=0; 
        int j=1;
        while(j<n){
            if(a[i] == a[j]){
                j++;
            }
            else{
                i++;
                a[i] = a[j];
            }
        }
        return i+1;
    }
};
