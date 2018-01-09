#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t1;
    cin>>n;
    vector<int> w;
    for(int i=0;i<n;++i)
        {
        cin>>t1;
        w.push_back(t1);
    }
    std::sort(w.begin(),w.end());
    std::reverse(w.begin(),w.end());
        int ch,ans=1;
        ch=w.back();
         w.pop_back();
    while(!w.empty())
        {
        if(w.back()>(ch+4))
        {ch=w.back();
        w.pop_back();
        ++ans;
        }
        else{
            w.pop_back();
        }
        
    }
    cout<<ans;
    return 0;
}

