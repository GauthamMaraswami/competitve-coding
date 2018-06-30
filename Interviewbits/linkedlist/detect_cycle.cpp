ListNode* Solution::detectCycle(ListNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A->next==NULL||A->next->next==NULL)
    {
        return A;
    }
    ListNode* fast=A;
    ListNode* slow=A;
    int loopflag=0;
    while(fast!=NULL &&fast->next!=NULL)
    {
     slow=slow->next;
     fast=fast->next->next;
     if(slow==fast)
     {
         loopflag=1;
         break;
     }
    }
    if(loopflag==0)
    {
        return NULL;
    }
    else if(loopflag==1)
    {
       slow = A;
        while (slow != fast)
        {
            slow = slow->next;
            fast = fast->next;
        }
 
        /* since fast->next is the looping point */
        return fast;
    }
       
}
