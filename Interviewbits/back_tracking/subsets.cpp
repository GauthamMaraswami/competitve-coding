

    void subsetsUtil(vector<int>& A, vector<vector<int> >& res,
                     vector<int>& subset, int index)
    {
        for (int i = index; i < A.size(); i++) {
     
            res.push_back(subset);
            subsetsUtil(A, res, subset, i + 1);
            subset.pop_back();
        }
     
        return;
    }
      void generateSubsets(vector<int> &S, int index, vector<int> &current, vector<vector<int> > &result) {
                if (index >= S.size()) {
                    result.push_back(current);
                    return;
                }
                int curIndex = index + 1;
                while (curIndex < S.size() && S[curIndex] == S[index]) {
                    curIndex++;
                }
     
                for (int i = 0; i <= (curIndex - index); i++) {
                    for (int j = 0; j < i; j++) current.push_back(S[index]);
                    generateSubsets(S, curIndex, current, result);
                    for (int j = 0; j < i; j++) current.pop_back();
                }
            }
     
     
     
    vector<vector<int> > Solution::subsetsWithDup(vector<int> &S) {
        /*vector<int> subset;
        vector<vector<int> > res;
        res.push_back(subset);
        int index = 0;
        subsetsUtil(A, res, subset, index);
          return res;*/     
                vector<vector<int> > result; 
                vector<int> current;
                sort(S.begin(), S.end());
                generateSubsets(S, 0, current, result);
                sort(result.begin(), result.end());
                return result;
            }
     
     


