class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        unordered_map<int ,int>mp;
        for(int  i = 0;i<n; i++){
            mp[a[i]]++;
            int element = a[i];
            if(mp[a[i]] == k)
            return element;
            
        }
        return -1;
    }
};
