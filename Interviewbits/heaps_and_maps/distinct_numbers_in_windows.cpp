

    vector<int> Solution::dNums(vector<int> &A, int B) {
        int siz=A.size();
        int st=0,end=B-1;
        map<int,int> hmap;
        vector<int>ans;
        if(end>A.size())
        {
            for(int i=0;i<=end;++i)
         {
            hmap[A[i]]++;
         } 
             ans.push_back(hmap.size());
             return ans;
        }
        
        for(int i=0;i<=end;++i)
        {
            hmap[A[i]]++;
        }
        ans.push_back(hmap.size());
       for(int i=end+1;i<A.size();++i)
        {
            hmap[A[st]]--;
            if(hmap[A[st]]<=0)
            {
                hmap.erase(A[st]);
            }
            hmap[A[i]]++;
            st++;
            ans.push_back(hmap.size());
        }
        return ans;
    }


