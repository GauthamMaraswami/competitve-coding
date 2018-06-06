

    int uniquepathhelper(int x,int y )
    {
     
       // cout<<x<<y<<endl;
        if(x==1&&y==1)
        {
            return 1;
        }
        else
        {   
            int ans=0;
            if(x-1>0)
            {
               
                        ans+=uniquepathhelper(x-1,y);
                    
            }
            if(y-1>0)
            {
                 
                        ans+=uniquepathhelper(x,y-1);
               
            }
            return ans;
        
        }
    }
    int Solution::uniquePaths(int A, int B) {
        int x=0, y=0;
      //  cout<<"t";
        if(x!=B-1&&y!=A-1)
        {
            int ans= uniquepathhelper(A,B);
            //cout<<ans<<"kk\n";
            return ans;
        }
        else
        {
            return 1;
        }
    }


