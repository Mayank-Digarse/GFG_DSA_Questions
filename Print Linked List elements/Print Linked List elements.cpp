class Solution
{
    public:
    void display(Node *head)
    {
      //your code goes here
      if(head == NULL){
          return;
      }
      cout<<head->data<<" ";
      
      display(head->next);
    }
};
