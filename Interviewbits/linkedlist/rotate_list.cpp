 #define null NULL
ListNode* Solution::rotateRight(ListNode* head, int k) {
 /*   ListNode* St=A;
    ListNode* run1;
    ListNode* run2;
     ListNode* run3;
     int count=0;
     run3=A;
    
     while(run3->next!=null)
     {
         
         ++count;
         run3=run3->next;
     }
     B=B % count; 
     if(B-1==0)
     {
         return A;
     }
    run1=A;
    run2=A;
    run3=A;
    int ctr=0;
    while(run1->next!=null)
    {
        ++ctr;
        if(ctr>B)
        {
        if(run2->next!=null)
        {
            run2=run2->next;
        }
        }
        run1=run1->next;
    }
    if(run2->next!=null)
    {
        run3=run2->next;
        run1->next=A;
        run2->next=null;
    }
    return run3;
    */
    
    // If current is NULL, k is greater than or equal to count
    // of nodes in linke
      
        if (head == NULL || head->next == NULL) return head;
 
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
 
        ListNode *fast = dummy, *slow = dummy;
 
        int sizeOfList = 0; 
        while (fast->next != NULL) {
            fast = fast->next;
            sizeOfList++;
        }
 
        int firstNodePos = sizeOfList - (k % sizeOfList);
        for (int i = 0; i < firstNodePos; i++) {
            slow = slow->next;
        }
 
        fast->next = dummy->next;
        dummy->next = slow->next; 
        slow->next = NULL;
 
        return dummy->next;
 
}
