#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
     sort(a,a+n);
    long long min=INT_MAX;
     // cout<<min;
    for(int i=0;i<n-1;++i)
    {
        if(min>abs(a[i+1]-a[i]))
            min=abs(a[i+1]-a[i]);
        //cout<<abs(a[i+1]-a[i]);
          //cout<<min;
    }
   // int min=*std::min_element(a,a+n);
  cout<<min;
   // cout<<max<<min;
    // your code goes here
    return 0;
}

