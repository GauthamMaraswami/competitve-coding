#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    int t,n;
   char g[100][100];
    cin>>t;
        while(t--)
        {
        scanf("%d",&n);
        bool good=true;
        for(int i=0;i<n;++i)
            {
            scanf("%s",g[i]);
            sort(g[i], g[i] + n);
      if(i > 0)
        for(int j = 0; j < n; j ++)
          good &= g[i][j] >= g[i - 1][j];
        }
       puts(good ? "YES" : "NO"); 
    }
    return 0;
}

