class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int num = stoi(str ,0 , 2);
        return num;
    }
};
