

    int Solution::sqrt(int A) {
        long long  start=1;
        long long end=A,mid=0,ans;
        if(A==0||A==1)
        return A;
        while(start<=end)
        {
             mid=(start+end)/2;
            if(mid*mid==A)
            {
                return mid;
            }
            else if(mid*mid<A)
            {
                start=mid+1;
                ans=mid;
            }
            else
            {
                end=mid-1;
            }
        }
        return ans;
    }


