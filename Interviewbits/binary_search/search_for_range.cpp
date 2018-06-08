

    vector<int> Solution::searchRange(const vector<int> &A, int B) {
       long long st=0,end=A.size(),mid;
       int ansl=-1,ansr=-1;
       while(st<=end)
       {
           mid=(st+end)/2;
           if(A[mid]==B)
           {
               if(mid-1>=0)
               {
                 if(A[mid-1]!=B)
                 {
                    ansl=mid;
                    break;
                 }
                 else
                 {
                     end=mid-1;
                 }
               }
               else{
                       ansl=mid;
                    break;
               }
           }
           else if(A[mid]>B)
           {
                end=mid-1;   
           }
           else
           {
               st=mid+1;
           }
       }
       st=0;
       end=A.size();
        while(st<=end)
       {
           mid=(st+end)/2;
           if(A[mid]==B)
           {
               if(mid+1<A.size())
               {
                 if(A[mid+1]!=B)
                 {
                    ansr=mid;
                    break;
                 }
                 else
                 {
                     st=mid+1;
                 }
               }
                 else{
                       ansr=mid;
                    break;
               }
           }
           else if(A[mid]>B)
           {
                end=mid-1;   
           }
           else
           {
               st=mid+1;
           }
       }
       vector<int> Ans;
       Ans.push_back(ansl);
       Ans.push_back(ansr);
       return Ans;
    }


