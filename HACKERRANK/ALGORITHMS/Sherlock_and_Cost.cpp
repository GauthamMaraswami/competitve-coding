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

using namespace std;
int main() {
    int t;
    cin>>t;
    while(t>0){
        
        t--;
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;++i){
            cin>>b[i];
        }
        int dp[n][2]={};
        for(int i=0;i<n-1;++i)
        {
            dp[i+1][0]=max(dp[i][0],dp[i][1]+abs(b[i]-1));
            dp[i+1][1]=max(dp[i][0]+abs(b[i+1]-1),dp[i][1]+abs(b[i]-b[i+1]));
        }
        cout<<max(dp[n-1][0],dp[n-1][1])<<endl;
    }
    return 0;
}


