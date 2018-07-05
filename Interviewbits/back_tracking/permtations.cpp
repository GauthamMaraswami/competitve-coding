

    void dfs(vector<vector<int> > &result,vector<int> &ans,vector<int> &A,vector<bool> &used,int n)
    {
        if(n==0)
        {
            result.push_back(ans);
            return ;
        }
        for(int i=0;i<used.size();++i)
        {
            if(used[i]==false)
            {
                ans.push_back(A[i]);
                used[i]=true;
                dfs(result,ans,A,used,n-1);
                ans.pop_back();
                used[i]=false;
            }
        }
    }
     
    vector<vector<int> > Solution::permute(vector<int> &A) {
        vector<vector<int> > result;
        vector<int> ans;
        if(A.size()<0)
        {
            return result;
        }
        sort(A.begin(),A.end());
        int n=A.size();
        vector<bool> used(n,false);
        dfs(result,ans,A,used,n);
        return result;
    }


