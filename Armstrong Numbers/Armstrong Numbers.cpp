class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int x = n;
        int a = x%10;
        x/=10;
        int b = x%10;
        x/10;
        int c = x%10;
        int ans = pow(a,3)+pow(b, 3)+pow(c,3);
        if(ans == n){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};
