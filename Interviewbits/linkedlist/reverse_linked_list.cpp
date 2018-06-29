 #define null NULL
 ListNode* reverseans(ListNode* A)
 {
      ListNode* curr=A;
    ListNode* prev=NULL;
    ListNode* next=NULL;
       while(curr!=null)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
       
    }
    return prev;
 }
 
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if(B==C)
    {
        return A;
    }
    ListNode* revsst=NULL;
    ListNode* revend=NULL;
     ListNode* revsprev=NULL;
      ListNode* revsendnext=NULL;
      ListNode* curr=A;
    int count=1;
    while(curr!=null&&count<=C)
    {
        if(count<B)
        {
            revsprev=curr;
        }
        else if(count==B)
        {
            revsst=curr;
        }
          if (count ==C ) {
            revend = curr;
            revsendnext = curr->next;
        }
 
        count++;
     
        curr=curr->next   ;
    }
 
    revend->next=NULL;
    revend=reverseans(revsst);
    
        if (revsprev)
        revsprev->next = revend;
 
    // If starting position was head
        else
        A = revend;
 
    revsst->next = revsendnext;
    return A;
    
    
    
}
