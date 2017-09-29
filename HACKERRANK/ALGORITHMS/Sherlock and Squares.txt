#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int a0=0;a0<t;++a0)
        {
        int a,b,ctr=0;
        cin>>a>>b;
        int t1=ceil(sqrt(a));
        int t2=floor(sqrt(b));
       ctr=t2-t1+1;
        cout<<ctr<<endl;
    }
    return 0;
}
