/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    Node* fast=head;
    Node* slow=head;
    if(head==NULL)
    {
        return false;
    }
    while(fast->next!=NULL&&(fast->next)->next!=NULL&&fast!=NULL)
    {
       
        slow=slow->next;
        fast=(fast->next)->next;
        if(fast==slow)
        {
            return true;
        }
        
    }
    return false;
    // Complete this function
    // Do not write the main method
}

