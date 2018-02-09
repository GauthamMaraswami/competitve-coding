#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
     set<int> s;
    int Q;
    cin>>Q;
    while(Q--)
        {
        int x,y;
        cin>>y;
        cin>>x;
        if(y==1)
              s.insert(x);
        else if(y==2)
            s.erase(x);
        else
          {  set<int>::iterator itr=s.find(x);
             if(itr==s.end())
                 cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
          }
    }
    return 0;
}

