

    int recursive_gcd(int a,int b)
    {
    	if (a == 0)
            return b;
        return recursive_gcd(b % a, a);
    }
    int Solution::gcd(int A, int B) {
        if(A<B)
        return recursive_gcd(A,B);
        else
        return recursive_gcd(B,A);
    }


