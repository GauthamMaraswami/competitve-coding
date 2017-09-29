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
        int c;
        int m;
        int ans=0,k;
        cin >> n >> c >> m;
        k=n/c;
        ans=k;
        while(k>=m)
        {   int t1=k/m;
            ans+=t1;
            k=t1+k%m;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
