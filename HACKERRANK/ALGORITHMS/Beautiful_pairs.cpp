#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
 int n;
    cin>>n;
    int a[2000],hmap[2000],b[2000];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        ++hmap[a[i]];
    }
    int count=0;
    for(int i=0;i<n;++i)
    {
        cin>>b[i];
      
        if(hmap[b[i]]>0)
        {
              --hmap[b[i]];
            count++;
        }
    }
    int caseb=0;
    if(count==n)
    {
        count--;
    }
    else{
    count++;
    /*
    for(int i=0;i<n;++i)
    {
        if(hmap[b[i]]<0)
        {
            ++count;
            caseb=1;
            cout<<"tesla";
            break;
        }
    }*/
    }
    cout<<count;
    return 0;
}

