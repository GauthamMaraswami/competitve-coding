

    int Solution::isPalindrome(string A) {
        std::transform(A.begin(), A.end(), A.begin(), ::tolower);
        int length=A.length();
        char c[length];
        int len=0;
           for(int i=0;i<length;++i)
        {
            if((A[i]<='z'&&A[i]>='a')||(A[i]<='9'&&A[i]>='0'))
            {
               c[len]=A[i];
               ++len;
            }
        }
      //std::cout<<len/2+1;
        for(int i=0;i<len/2;++i)
        {
           // cout<<c[i]<<c[len-i-1];
            
            if(c[i]!=c[len-i-1])
            {
                return 0;
            }
        }
        return 1;
    }


