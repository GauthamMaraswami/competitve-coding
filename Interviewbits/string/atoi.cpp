

    int Solution::atoi(const string A) {
        int len=A.length();
        int ans=0;
        bool negflag=false;
        int i=0;
        if(A[0]=='-')
        {
            negflag=true;
            ++i;
           
        }
        else if(A[0]=='+')
        {
            ++i;
        }
         //   cout<<negflag;
        while(i<A.length())
        {
               if(A[i]<'0'||A[i]>'9')
               {
                       if(negflag)
                        {
                          
                            return ans*-1;
                        }
                   return ans;
               }
               else
               {
                   if(ans>INT_MAX/10)
                   {
                       if(negflag)
                        {
                            return INT_MIN;
                        }
                       return INT_MAX;
                   }
                   ans=ans*10+(A[i]-'0');
                }
               ++i;
        }
     
        if(negflag)
        {
           //  cout<<"reaching";
            return ans*-1;
        }
        else{
            return ans;
        }
    }


