#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    //sort(arr.begin(),arr.end());
    int mx = *max_element(arr.begin(), arr.end());
    while(mx>0)
        {int mn=mx;
         int cuts=0;
        for(int i=0;i<n;++i)
            if(arr[i]>0)
            mn=min(mn,arr[i]);
        for(int i=0;i<n;++i)
            if(arr[i]>0)
           { arr[i]-=mn;
            ++cuts;
           }
            mx=*max_element(arr.begin(),arr.end());
         cout<<cuts<<endl;
    }
    
  //  for(int arr_i = 0;arr_i < n;arr_i++){
    //  cout<< arr[arr_i]<<endl;
    //}
    return 0;
}
