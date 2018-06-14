

    int Solution::lengthOfLastWord(const string A) {
        int len=A.length();
        int ans=0;
        if(A[len-1]==' '){
        for(int i=len-1;i>=0;--i)
        {
            if(A[i]==' ')
            {
                len--;
            }
            if(A[i]!=' ')
            {
                break;
            }
        }
        
        }
        for(int i=len-1;i>=0;--i)
        {
            if(A[i]==' ')
            {
                return ans;
            }
            ans++;
        }
        return ans;
    }


