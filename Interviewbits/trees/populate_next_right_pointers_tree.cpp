TreeLinkNode* getnextnode(TreeLinkNode* B1)
 {
     TreeLinkNode* B=B1->next;
     while(B!=NULL)
     {
         if(B->left!=NULL)
         {
             B=B->left;
             return B;
         }
         else if(B->right!=NULL)
         {
             B=B->right;
             return B;
         }
         B=B->next;
     }
     return NULL;
 }
void Solution::connect(TreeLinkNode* A1) {
    TreeLinkNode* A=A1;
    if(A==NULL)
    {
        return;
    }
    A->next=NULL;
    while(A!=NULL)
    {
        TreeLinkNode* B=A;
        while(B!=NULL)
        {
            if(B->left!=NULL)
            {
                if(B->right!=NULL)
                {
                    B->left->next=B->right;
                }
                else
                {
                    B->left->next=getnextnode(B);
                }
            }
            if(B->right!=NULL)
            {
                B->right->next=getnextnode(B);
            }
            
            B=B->next;
        }
       
         if(A->left!=NULL)
        {
            A=A->left;
        }
        else if(A->right!=NULL)
        {
            A=A->right;
        }
        else
        {
            A=getnextnode(A);
        }
    }
}
