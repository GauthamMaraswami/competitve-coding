struct compare {
    bool operator()(ListNode* a, ListNode* b)
    {
        return a->val> b->val;
    }
};
 
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    int n=A.size();
    ListNode* head=NULL;
    ListNode* last=NULL;
    priority_queue<ListNode*, vector<ListNode*>, compare> pq;
     for (int i = 0; i < n; i++)
        pq.push(A[i]);
        
    while (!pq.empty()) {
 
        ListNode* top = pq.top();
        pq.pop();
 
        if (top->next != NULL)
            pq.push(top->next);
 
        if (head == NULL) {
            head = top;
 
            last = top;
        }
 
        else {
            last->next = top;
            last = top;
        }
    }
 
 
    return head;
    
}
