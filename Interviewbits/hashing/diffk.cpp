

    int Solution::diffPossible(const vector<int> &A, int B) {
       vector<int> Ans=A;
       int size=A.size();
       sort(Ans.begin(),Ans.end());
       int i=0,j=1;
       while(i<size&&j<size)
       {
           if(i!=j&& Ans[j]-Ans[i]==B)
           {
                return 1;   
            }
            else if(Ans[j]-Ans[i]<B)
            {
                j++;
            }
            else
            {
                i++;
            }
            
        }
    return 0;
        
    }


