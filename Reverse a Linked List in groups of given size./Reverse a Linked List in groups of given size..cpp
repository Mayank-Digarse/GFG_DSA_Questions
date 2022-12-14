class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if(head == NULL) return NULL;
        node* prev = NULL;
        node* curr = head;
        node* forward;
        int cnt = 0;
        while(curr!= NULL && cnt<k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            cnt++;
            
        }
        node*recursionKaAns = NULL;
        if(forward != NULL)
        recursionKaAns = reverse(forward , k);
        head->next = recursionKaAns;
        return prev;
    }
};
