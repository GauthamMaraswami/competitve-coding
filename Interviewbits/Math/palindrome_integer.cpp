

    int Solution::isPalindrome(int A) {
        int diva=1;
        int A1=A;
        if(A<0)
        return 0;
        while((A1/diva)>=10)
        {
            diva=diva*10;
        }
        while(A1>0)
        {
            int l=A1/diva;
            int r=A1%10;
            //cout<<l<<r<<endl;
            if(l!=r)
            {
                return 0;
            }
            else{
                A1=A1%diva;
                //cout<<A1<<endl;
                A1=A1/10;
                  //  cout<<A1<<endl;
                diva=diva/100;
            }
            
        }
        return 1;
        
    }


