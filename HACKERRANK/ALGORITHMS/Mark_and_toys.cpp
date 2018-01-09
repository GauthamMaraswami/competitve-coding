#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    int answer=0,c;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    

    
    // Write the code for computing the final answer using n,k,prices
    std::sort(prices.begin(),prices.end());
    std::reverse(prices.begin(),prices.end());
    while(k>prices.back())
        {
       k=k-prices.back();
        prices.pop_back();
        ++answer;
    }
    prices.push_back(c);
    
    cout << answer << endl;
    
    return 0;
}

