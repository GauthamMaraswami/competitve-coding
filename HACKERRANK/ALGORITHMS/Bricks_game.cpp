#include <iostream>
#include<bits/stdc++.h>
//#define assn(n,a,b) assert(n>=a && n<=b)
using namespace std;
long long  a[100009];
long long sum[100009];
long long dp[100009];
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        sum[0]=0;
        for(int i=n;i>0;--i)
        {
            cin>>a[i];
            //assn(val[i],0ll,1000000000ll);


        }
        for(int i=1;i<=n;++i)
        {

            //if(i>0){
            sum[i]=sum[i-1]+a[i];
            //cout<<sum[i]<<endl;
            //}
        }
       // sum[n]=sum[n-1]+a[]
        dp[0]=0;
        dp[1]=a[1];
        dp[2]=a[2]+dp[1];
        dp[3]=dp[2]+a[3];
       // cout<<dp[0]<<dp[1]<<dp[2];
        for(int i=4;i<=n;++i)
        {
            dp[i]=max(-1ll,sum[i-1]-dp[i-1]+a[i]);
            //cout<<"dp1"<<dp[i]<<endl;
            dp[i]=max(dp[i],sum[i-2]-dp[i-2]+a[i]+a[i-1]);
              //   cout<<"dp2"<<dp[i]<<endl;
            dp[i]=max(dp[i],sum[i-3]-dp[i-3]+a[i]+a[i-1]+a[i-2]);\

        }
        cout<<dp[n]<<endl;
    }
    return 0;
}

