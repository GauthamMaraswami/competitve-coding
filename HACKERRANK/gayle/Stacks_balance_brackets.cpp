#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

#include<bits/stdc++.h>
using namespace std;

bool is_balanced(string expression) {
    stack<char> bracket_balancer;
   
   // int c=0;
    //while(c<expression.length())
    for (char ch : expression)
    {
        //char ch=expression[c];
        if(ch=='{')
        {
            bracket_balancer.push('}');
        }
         else if(ch=='(')
        {
            bracket_balancer.push(')');
        }
        else  if(ch=='[')
        {
            bracket_balancer.push(']');
        }
        else 
        {
            if( bracket_balancer.empty()||ch!=bracket_balancer.top() )
            { return false;
            }
                bracket_balancer.pop();
        }
        
        
    }
        /*else  if(ch==')' && !bracket_balancer.empty())
        {
            if(bracket_balancer.top()==1)
            {
                bracket_balancer.pop();
            }
            else{
                return false;
            }
        }
         else  if(ch==']'&& !bracket_balancer.empty())
        {
            if(bracket_balancer.top()==2)
            {
                bracket_balancer.pop();
            }
            else{
                return false;
            }
        }
         else  if(ch=='}'&& !bracket_balancer.empty())
        {
            if(bracket_balancer.top()==3)
            {
                bracket_balancer.pop();
            }
            else{
                return false;
            }
        }*/
       // ++c;
   // }
    return bracket_balancer.empty();
    
    //return false;
}
/*bool is_balanced(string expression) {
  stack<char> s;
  for (char c : expression) {
    if      (c == '{') s.push('}');
    else if (c == '[') s.push(']');
    else if (c == '(') s.push(')');
    else {
      if (s.empty() || c != s.top())
        return false;
      s.pop();
    }
  }
  return s.empty();
}
*/
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

