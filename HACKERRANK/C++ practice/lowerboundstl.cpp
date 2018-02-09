#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
//#define rep(n) for(int i=0;i<n;++i)
using namespace std;


int main() {
    int n;
    cin>>n;
    vector <int> a;
   for(int i=0;i<n;++i)
        {int x1;
        cin>>x1;
         a.push_back(x1);
        }
    int q;
    cin>>q;
   for(int i=0;i<q;++i)
    { int x;
     cin>>x;
     vector<int>::iterator low;
      low=lower_bound (a.begin(), a.end(), x); 
     if(*low==x)
      cout<<"Yes"<<" ";
     else
         cout<<"No"<<" ";
     cout<<(low-a.begin()+1)<<endl;
    }
}

