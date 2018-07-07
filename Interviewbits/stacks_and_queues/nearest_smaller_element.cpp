

    vector<int> Solution::prevSmaller(vector<int> &A) {
        stack<int> S;
        vector<int> ans;
        for(int i=0;i<A.size();++i)
        {
            while (!S.empty() && S.top() >= A[i])
                S.pop();
     
           
            if (S.empty())
                ans.push_back(-1);
            else  
                ans.push_back(S.top()); 
     
            S.push(A[i]);
        }
        return ans;
    }


