

    vector<vector<int> > Solution::anagrams(const vector<string> &A) {
        map<string,vector<int>> hashmap;
        map<string,vector<int>>::iterator it;
        vector<vector<int> > result;
        for(int i=0;i<A.size();++i)
        {
            string a=A[i];
            sort(a.begin(),a.end());
            if(hashmap.find(a)!=hashmap.end())
            {
                it=hashmap.find(a);
                vector<int> temp=it->second;
                temp.push_back(i+1);
                it->second=temp;
            }
            else
            {
                vector<int> temp;
                temp.push_back(i+1);
           //      gquiz1.insert(pair <int, int> (1, 40));
                hashmap.insert(pair<string,vector<int>> (a,temp));
                
            }
            
        }
        for(it=hashmap.begin();it!=hashmap.end();it++)
        {
            result.push_back(it->second);
        }
        
        
        return result;
    }


