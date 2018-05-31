

    int Solution::solve(vector<int> &A) {
      std::sort(A.begin(),A.end());
      int ans=-1;
      for(int i=0;i<A.size();++i)
      {
            if(A[i]==A.size()-i-1)
            {
                if(A[i]==0&&i+1==A.size())
                   {
                       ans=1;
                   }
                 else if(A[i]!=A[i+1]){
                        ans=1;
                        break;
                 }
            }
           // cout<<A[i];
      }
      return ans;
    }


