

    int Solution::diffPossible(vector<int> &A, int B) {
        int i=0,j=1;
        int size=A.size();
        while(i<size&&j<size)
        {
            if(i!=j&&A[j]-A[i]==B)
            {
                return 1;
            }
            else if(A[j]-A[i]<B)
            {
                ++j;
            }
            else {
                ++i;
            }
     
        }
        return 0;
    }


