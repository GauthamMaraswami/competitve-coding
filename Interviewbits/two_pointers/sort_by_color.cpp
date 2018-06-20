

    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
     
     
    void Solution::sortColors(vector<int> &A) {
     
      int siz=A.size();
     int lo=0;
     int mid=0;
     int hi=siz-1;
     while(mid<=hi)
     {
         switch(A[mid])
         {
             case 0:
             {
                 swap(&A[lo],&A[mid]);
                 lo++;
                 mid++;
                 break;
             }
             case 1:
             {
                 mid++;
             
                 break;
             }
             case 2:
             {
                 swap(&A[hi],&A[mid]);
                 hi--;
                 break;
             }
             
             
         }
         
     }
      
    }


