

    int retd(char c)
    {
        //cout<<c;
        if(c=='I')
        {
            return 1; 
        }
        else if(c=='V')
        {
            return 5; 
        }
        else if(c=='X')
        {
            return 10;
        }
        else if(c=='L')
        {
            return 50;
        }
        else if(c=='C')
        {
            return 100; 
        }
           else if(c=='D')
        {
            return 500; 
        }
           else if(c=='M')
        {
            return 1000; 
        }
    }
     
     
    int Solution::romanToInt(string A) {
        int ans=0;
     
        for(std::string::iterator it=A.begin();it!=A.end();++it)
        {
             
            if(it+1!=A.end())
            {
                if(retd(*it)<retd(*(it+1)))
                {
                    //int t=retd(*(it));
                    //cout<<t<<endl;
                    ans=ans+retd(*(it+1))-retd((*it));
                    ++it;
                }
                else
                {
                     
                    ans=ans+retd(*it);
                //   cout<<ans<<"kha\n" ;
                }
            }
            else
            {
                 
                ans=ans+retd(*it);
               //cout<<ans<<"kha\n" ;
            }
        }
        return ans;
    }


