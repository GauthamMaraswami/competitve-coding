#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int k=n;
    for(int i=1;i<=n;++i)
        {
        for(int l=k;l>1;--l)
            cout<<" ";
         for(int j=1;j<=i;++j)
             cout<<"#";
         cout<<endl;
        --k;
    }
    return 0;
}