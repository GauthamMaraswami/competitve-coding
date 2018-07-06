int Solution::braces(string A) {
    stack <char> st;
    for(int i=0;i<A.length();++i)
    {
         if(A[i]==')')
         {
           char top = st.top();
            st.pop();
            bool flag=true;
    while (top != '(') {
                if (top == '+' || top == '-' || 
                    top == '*' || top == '/')
                    flag = false;
 
                top = st.top();
                st.pop();
            }
             if (flag == true)
                return 1;
 
         }
       else
            st.push(A[i]);
        
        
    }
    return 0;
}
