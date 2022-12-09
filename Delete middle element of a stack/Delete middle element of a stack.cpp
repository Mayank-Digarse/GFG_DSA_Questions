
class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        int middle = sizeOfStack/2;
        for(int i =1 ; i<sizeOfStack; i++){
            cout<<s.top()<<" ";
            s.pop();
            if(middle ==i)
            s.pop();
        }
    }
};
