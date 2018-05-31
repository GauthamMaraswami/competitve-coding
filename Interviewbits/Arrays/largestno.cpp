int myCompare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1: 0;
}



string Solution::largestNumber(const vector<int> &A) {
    vector<string> Astring;
    string ans;
    for(int i=0;i<A.size();++i)
    {
        string S=to_string(A[i]);
        Astring.push_back(S);
    }
    sort(Astring.begin(),Astring.end(),myCompare);
     for(int i=0;i<A.size();++i)
    {
       // cout<<Astring[i]<<" ";
        if(ans.compare(Astring[i])==0 && ans.compare(to_string(0))==0)
        {
            continue;
        }
        ans=ans.append(Astring[i]);
    }
    return ans;
}

