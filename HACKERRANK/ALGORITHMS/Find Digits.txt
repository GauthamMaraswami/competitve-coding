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
        cin >> n;
        int x=n,ctr=0;
        
        while(x!=0)
            {
            int d1=x%10;
            x=x/10;
            if(d1!=0)
            if(n%d1==0)
                ++ctr;
        }
        cout<<ctr<<endl;
        
    }
    return 0;
}
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
        cin >> n;
        int x=n,ctr=0;
        
        while(x!=0)
            {
            int d1=x%10;
            x=x/10;
            if(d1!=0)
            if(n%d1==0)
                ++ctr;
        }
        cout<<ctr<<endl;
        
    }
    return 0;
}
