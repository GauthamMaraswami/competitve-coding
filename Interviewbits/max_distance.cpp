

    int Solution::maximumGap(const vector<int> &A) {
    int  lmin[A.size()];
      int rmax[A.size()];
      int len=A.size();
      lmin[0]=A[0];
      if(len==1)
      {
          return 0;
      }
      //cout<<len<<endl;
    for(int i=1;i<A.size();++i)
    {
        lmin[i]=(min(lmin[i-1],A[i]));
    }
    rmax[len-1]=A[len-1];
      for(int j=len-2;j>=0;--j)
    {
        rmax[j]=(max(rmax[j+1],A[j]));
    }  
    /*  for(int k=0;k<len;++k)
    {
        cout<<lmin[k]<<" "<<rmax[k]<<endl;
    }  
    */
     
     
     
     
    int i=0,j=0,maxDiff=-1;
     while (j < len && i < len)
        {
            if (lmin[i] <= rmax[j])
            {
                maxDiff = max(maxDiff, j-i);
                j = j + 1;
            }
            else
                i = i+1;
        }
     
        return maxDiff;
    }


