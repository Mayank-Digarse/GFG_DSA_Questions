
pair<long long, long long> getMinMax(long long a[], int n) {
    int min = a[0];
    int max = a[0];
    for(int i =0 ;i<n; i++){
        if(a[i]<= min){
            min = a[i];
        }
       else if(a[i]>= max){
            max = a[i];
        }
    }
     pair<long long , long long> ans;
        ans.first = min;
        ans.second = max;
        return ans;
}
