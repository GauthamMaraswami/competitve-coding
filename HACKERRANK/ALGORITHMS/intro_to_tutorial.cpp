#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,v;
    cin>>v;
    cin>>n;
    int arr[n],pos;
    for(int i=0;i<n;++i)
        {
        cin>>arr[i];
        if(arr[i]==v)
            pos=i;
    }
       cout<<pos<<endl;
    
    return 0;
}

