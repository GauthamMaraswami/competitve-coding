vector<int> Solution::maxset(vector<int> &A) {
    vector<int> temp;
    vector<int> final;
    long long maxendinghere=0;
    long long maxsofar=0;
    
    for(int i=0;i<A.size();++i)
    {
        maxendinghere=maxendinghere+A[i];
        temp.push_back(A[i]);
        if(A[i]<0)
            {
                maxendinghere=0;
                temp.clear();
            }
        if(maxsofar<=maxendinghere)
        {
            if(maxsofar<maxendinghere||final.size()<temp.size())
            {
                 maxsofar=maxendinghere;
                 final.clear();
                 final=temp;
            }
        
        }
       // cout<<maxendinghere<<endl;
    }
    return final;
}

