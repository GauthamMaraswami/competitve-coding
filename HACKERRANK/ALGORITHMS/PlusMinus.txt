#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    double k=0,l=0,m=0;
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
        
    }
    for(int i=0;i<n;++i)
      {
        if(arr[i]>0)
            ++k;
        else if(arr[i]<0)
            ++l;
        else ++m;
    }  
    cout<<(k/float(n))<<"\n"<<(l/float(n))<<"\n"<<(m/float(n))<<endl;
    return 0;
}
