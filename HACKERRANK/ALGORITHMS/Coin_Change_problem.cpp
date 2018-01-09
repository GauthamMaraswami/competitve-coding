#include <bits/stdc++.h>

using namespace std;

int c[52];
int numCoins;
long long table[52][252];
bool calculated[52][252];
long long solve(int i,int make)
{
   if(make<0)
       return 0;
   if(make==0)
        return 1;
   if(i>numCoins)
       return 0;
        if(calculated[i][make] == false){ //eliminating overlap
        table[i][make] = solve(i, make - c[i]) + solve(i+1, make);
        calculated[i][make] = true;
    }
    return table[i][make];
}

int main() {
   int m;
    cin >> m >> numCoins;
   
    for(int i = 1; i <= numCoins; i++){
       cin >> c[i];
    }
    // Print the number of ways of making change for 'n' units using coins having the values given by 'c'
    long ways = solve(1, m);
    cout<<ways;
    return 0;
}

