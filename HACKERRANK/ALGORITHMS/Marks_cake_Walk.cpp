#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> calories(n);
    for(int calories_i = 0; calories_i < n; calories_i++){
       cin >> calories[calories_i];
    }
    std::sort (calories.begin(), calories.begin()+n); 
    long long tot_cal=0;
    int cnt=0;
 //   cout<<pow(2,0);
    for(int i=n-1;i>=0;--i)
    {
        tot_cal+=calories[i]*pow(2,cnt);
        //cout<<tot_cal<<endl;
        ++cnt;
    }
    cout<<tot_cal;
    return 0;
}

