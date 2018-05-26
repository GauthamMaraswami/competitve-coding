

    void Solution::setZeroes(vector<vector<int> > &A) {
        vector<int> Atempcol;
        vector<int> Atemprow;
           for(int i=0;i<A[0].size();++i)
       {
           Atempcol.push_back(A[0][i]);
       }
          for(int i=0;i<A.size();++i)
       {
           Atemprow.push_back(A[i][0]);
       }
       for(int i=0;i<A.size();++i)
       {
           for(int j=0;j<A[i].size();++j)
           {
               if(A[i][j]==0)
               {   
                   Atempcol[j]=0;
                   Atemprow[i]=0;
                   
               }
           }
       }
        
     for(int i=0;i<A.size();++i)
       {
        if(Atemprow[i]==0)  
        {
            for(int j=0;j<A[i].size();++j) 
            {
                A[i][j]=0;
            }
        }
           
       }
        for(int i=0;i<A[0].size();++i)
       {
        if(Atempcol[i]==0)  
        {
            for(int j=0;j<A.size();++j) 
            {
                A[j][i]=0;
            }
        }
           
       }
    }


