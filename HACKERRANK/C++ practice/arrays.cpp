#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
   long int i,n,a[1000],b[1000];
    cin>>n;
     for(i=0;i<n;++i)
         {
         cin>>a[i];
         b[n-i-1]=a[i];
         }
     for(i=0;i<n;++i)
         cout<<b[i]<<" ";
             /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

