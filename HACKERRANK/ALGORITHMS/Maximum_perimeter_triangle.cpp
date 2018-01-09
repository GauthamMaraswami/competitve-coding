#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    long long l[50];
    for(int i=0;i<n;++i)
        cin>>l[i];
    
     std::vector<int>lol (l, l+n);  
    std::sort (lol.begin(), lol.begin()+n); 
        
    int possible=-1;
    int first=n-1,second=n-2,third=n-3;
    while(third>=0 && lol[third+2]>=lol[third+1]+lol[third])
    {
        third--;
        
        
    }
    if (third<0)
    {
        cout<<-1;
    }
    else{
        cout<<lol[third]<<" "<<lol[third+1]<<" "<<lol[third+2];
    }
    return 0;
}

