#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
   multimap<int,int> m;
    for(int i=1;i<=n;++i)
        {
        int a,b;
        cin>>a>>b;
        m.insert(make_pair(a+b,i));
    }
    for(multimap<int,int>::iterator me=m.begin();me!=m.end();me++)
        cout<<me->second<<" ";
    return 0;
}

