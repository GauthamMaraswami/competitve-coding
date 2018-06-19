

    int Solution::maxArea(vector<int> &A) {
        int siz=A.size();
        int l=0;
        int r=siz-1;
        int ans=0;
        while(l<r)
        {
            ans=max(ans,min(A[l],A[r])*(r-l));
            if(A[l]<A[r])
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        return ans;
    }


