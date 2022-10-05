class Solution {
  public:
    string isSquare(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
        // code here
        if(x1 == x2 && x3 == x4 && y1 == y2 && y3 == y4) return "No";
        if(((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) == ((x4-x3)*(x4-x3) +(y4-y3)*(y4-y3)) ){
            return "Yes";
        }
        return "No";
        
    }
};
