

    string Solution::fractionToDecimal(int A, int B) {
        long n=A,d=B;
        if(n==0)
        {
            return "0";
        }
        string res;
        if((n<0)&&(d>0)||(n>0)&&(d<0))
        {
            //cout<<"reach";
            res+='-';
        }
        n=abs(n);
        d=abs(d);
        res+=to_string((n/d));
        if(n%d==0)
        {
            return res;
        }
        res+='.';
        
        map<long,long> hashmap;
        for(long r=n%d;r;r=r%d)
        {
            if (hashmap.find(r) != hashmap.end()) {
                res.insert(hashmap[r], 1, '(');
                res += ')';
                break;
            }
            else
            {
             //   cout<<"reaching";
                hashmap[r] = res.size();
                r *= 10;
                res.push_back((char)('0' + (r / d)));
            }
        }
        return res;
    }


