

    int checkvalue(string A,string B,int st )
    {
        int Alen=A.length();
        int Blen=B.length();
     
        if(st+Blen>Alen)
        {
            return -1;
        }
        int t=0;
        for(int i=st;i<st+Blen;++i,++t)
        {
            if(A[i]!=B[t])
            {
                return -1;
            }
        }
        return 1;
    }
     
    int Solution::strStr(const string A, const string B) {
        int ans=-1;
        int len=A.length();
        if(B.length()==0||A.length()==0)
        {
            return 0;
        }
        for(int i=0;i<len;++i)
        {
            if(A[i]==B[0])
            {
                ans=checkvalue(A,B,i);
                if(ans!=-1)
                {
                    return i;
                }
            }
        }
        return ans;
    }


