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
        int n,t;
        cin >> n;
        t=n;
        while(t%3!=0)
            {
            t-=5;
            }
        if(t<0)
            cout<<-1<<endl;
        else
            
        {for(int i=0;i<t;++i)
            cout<<"5";
        for(int i=0;i<(n-t);++i)
            cout<<"3";
        cout<<endl;
        }
    }
    return 0;
}
