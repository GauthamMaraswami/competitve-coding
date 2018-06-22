

    int min1(int a,int b,int c)
    {
        return min(a,min(b,c));
    }
    int max1(int a,int b,int c)
    {
        return max(a,max(b,c));
    }
     
    int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
        int As=A.size(),Bs=B.size(),Cs=C.size();
        int i=0,j=0,k=0;
        int diff=INT_MAX;
        while(i<As&&j<Bs&&k<Cs)
        {
            int maxa=max1(A[i],B[j],C[k]);
            int mina=min1(A[i],B[j],C[k]);
            diff=min(diff,maxa-mina);
            if(A[i]==mina)
            {
                ++i;
            }
            else if(B[j]==mina)
            {
                ++j;
            }
            else
            {
                ++k;
            }
            
        }
        return diff;
    }


