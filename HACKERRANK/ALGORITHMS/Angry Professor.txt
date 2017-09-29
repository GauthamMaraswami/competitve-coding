#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int k;
        cin >> n >> k;
        vector<int> a(n);
        for(int a_i = 0;a_i < n;a_i++){
           cin >> a[a_i];
        }
        int desc=0,ctr=0;
        for(int i=0;i<n;++i)
            if(a[i]<=0)
              ++ctr;
         if(ctr>=k)
            desc=1;
            if(desc==1)
              cout<<"NO"<<endl;
            if(desc==0)
              cout<<"YES"<<endl;
    }
    return 0;
}
