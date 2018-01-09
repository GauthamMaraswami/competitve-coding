#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,m,K,x=0;
    cin>>n>>m>>K;
    int y=0;
    char a[n][m];
    for(int i=0;i<n;++i){
        cin>>a[i];
        for(int j=0;j<m;++j)
        {
            if(a[i][j]=='*')
            {
                x=i;
                y=j;
            }
        }
        
    }
      int f[K+1][n][m];
       int ans =1 << 29;
        for (int k=0; k<=K; k++)
            for (int i=0; i<n; i++)
                for (int j=0; j<m; j++) 
                    if (k == 0) 
                        f[k][i][j] = i == 0 && j == 0 ? 0 : 1 << 29 ;
                    else {
                        int res =1 << 29;
                        if (i > 0)     res =min(res, f[k - 1][i - 1][j] + (a[i - 1][j] == 'D' ? 0 : 1));
                        if (i < n - 1) res =min(res, f[k - 1][i + 1][j] + (a[i + 1][j] == 'U' ? 0 : 1));
                        if (j > 0)     res = min(res, f[k - 1][i][j - 1] + (a[i][j - 1] == 'R' ? 0 : 1));
                        if (j < m - 1) res = min(res, f[k - 1][i][j + 1] + (a[i][j + 1] == 'L' ? 0 : 1));

                        f[k][i][j] = res;
                        //cout<<f[k][i][j];
                    }
    for (int k=0; k<=K; k++)
            ans = min(ans, f[k][x][y]);

        if (ans < (1 << 29)) cout<<(ans);
        else cout<<(-1);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

