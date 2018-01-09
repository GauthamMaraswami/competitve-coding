#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int t;
    cin>>t;
    while(t--){
        int n,k,t1;
        vector <int> a;
        vector <int> b;
        cin>>n>>k;
        for(int i=0;i<n;++i)
            {
            cin>>t1;
            a.push_back(t1);
        }
        for(int j=0;j<n;++j)
            {
            cin>>t1;
            b.push_back(t1);
        }
        std::sort(a.begin(),a.end());
        std::sort(b.begin(),b.end());
        std::reverse(b.begin(),b.end());
        int flag=0;
      for(int i=0;i<n;++i)
          {
             if((a.back()+b.back())<k)
                flag=1;
             a.pop_back();
             b.pop_back();
      }
        if(flag==0)
             printf("YES\n");
        else
             printf("NO\n");
    }
    return 0;
}

