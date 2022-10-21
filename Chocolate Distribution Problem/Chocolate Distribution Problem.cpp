class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    int min = INT_MAX;
    sort(a.begin() , a.end());
    for(int i = 0; i+m-1<n;i++){
        int d = a[i+m-1] - a[i];
        if(d<min){
            min = d;
        }
    }
    return min;
    }   
};
