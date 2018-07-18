vector<int> Solution::inorderTraversal(TreeNode* A) {
    TreeNode*  curr=A;
    vector<int> res;
    stack <TreeNode*> dfsstack;
   
    bool done=false;
    while(!done)
    {
        if(curr!=NULL)
        {
           dfsstack.push(curr);
             curr=curr->left;
        }
        else{
            if(dfsstack.empty())
            {
                done=true;
            }
            else
            {
                curr=dfsstack.top();
                dfsstack.pop();
                res.push_back(curr->val);
                curr=curr->right;
            }
        }
    }
    return res;
}
