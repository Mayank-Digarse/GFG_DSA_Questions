class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> temp;
        int lead = a[n-1];
        temp.push_back(a[n-1]);
        for(int i = n-2; i>= 0; i--){
            if(a[i] >= lead){
                temp.push_back(a[i]);
                lead = a[i];
            }
        } 
        vector<int> v;
        for(int i = temp.size()-1; i>=0; i--){
            v.push_back(temp[i]);
        }
        return v;
    }
};
