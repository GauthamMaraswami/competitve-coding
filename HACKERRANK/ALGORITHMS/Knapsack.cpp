#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
    int dp[2005];

int main() {
   int t;

    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;++i)
        {
            cin>>a[i];
           
        }
        for(int g=0;g<2005;++g)
        {
            dp[g]=0;
            //cout<<dp[g];
        }
        sort(a,a+n);
        
        for(int g=1;g<=k;++g)
        {
            for(int h=0;h<n;++h)
            {
                if(a[h]<=g){
                    dp[g]=max(dp[g],dp[g-a[h]]+a[h]);
                    
                }
            }
        }
        cout<<dp[k]<<endl;
        
    }
    return 0;
}

