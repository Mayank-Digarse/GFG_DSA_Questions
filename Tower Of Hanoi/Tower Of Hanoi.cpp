class Solution{
    public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    void solve(int n ,int s, int d ,int h ,long long &cnt){
        cnt++;
        if(n == 1){
            cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d<<endl;
            return ;
        }
        solve(n-1 ,s , h , d ,cnt);
        cout<<"move disk "<<n<<" from rod "<<s<<" to rod "<<d <<endl;
        solve(n-1 ,h , d , s ,cnt);
    }
    
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        long long cnt = 0;
        solve (N , from , to ,aux ,cnt);
        return cnt;
    }

};
