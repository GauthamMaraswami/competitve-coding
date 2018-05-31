

    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
     
    void Solution::nextPermutation(vector<int> &A) {
        int i, j;
        int n=A.size();
        for (i = n-1; i > 0; i--)
            if (A[i] > A[i-1])
               break;
        if(i==0)
        {
            sort(A.begin(),A.begin()+n);
            return;
        }
     
           int x = A[i-1], smallest = i;
        for (j = i+1; j < n; j++)
            if (A[j] > x && A[j] < A[smallest])
                smallest = j;
        swap(&A[smallest], &A[i-1]);
     
        sort(A.begin()+ i, A.begin() + n);
     
    }


