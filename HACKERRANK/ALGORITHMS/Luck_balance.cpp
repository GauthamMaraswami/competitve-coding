#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,k,lb=0;
    cin>>n>>k;
    int l[n],t[n];
    for(int i=0;i<n;++i){
        cin>>l[i]>>t[i];
        if(t[i]==0)
            lb+=l[i];
    }
    while(k>0){
        //cout<<lb<<"\n";
     int big=0,pos=-1;
    
    for(int i=0;i<n;++i)
        {
        if(t[i]==1 && l[i]>big)
        {big=l[i];
         pos=i;
        }
    }
    if(pos!=-1)
    {
        lb+=l[pos];
        l[pos]=-100;
    }
    k--;
    }
    for(int i=0;i<n;++i){
        if(l[i]>-100&&t[i]==1)
            lb-=l[i];
    }
    printf("%d",lb);
    return 0;
}

