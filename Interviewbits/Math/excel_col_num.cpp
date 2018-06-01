

    int Solution::titleToNumber(string A) {
        int ans=0;
        for(int i=0;i<A.length();++i)
        {
            int temp=A[i]-'A'+1;
            ans=ans*26+temp;
            
        }
        return ans;
    }


