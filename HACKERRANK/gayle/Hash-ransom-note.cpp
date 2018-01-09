#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool ransom_note(vector<string> magazine, vector<string> ransom) {
   map<string, int> magazineIndex;
   
    for(std::vector<string>::iterator it = magazine.begin() ; it != magazine.end(); ++it)
  {
        //cout<<*it<<magazineIndex.count(*it);
        //if(magazineIndex[magazine[i]]>0)
        if(magazineIndex.count(*it)>=1) 
        {
           magazineIndex[*it]++;
         //   magazineIndex.insert(std::pair<string,int>(magazine[i],(magazineIndex.find(magazine[i])->second+1)));
        } 
       else
       {  magazineIndex.insert(std::pair<string,int>(*it,1));
       }
        // cout<<*it<<" "<<magazineIndex[*it]<<endl;
    }
    
    
    
    for(std::vector<string>::iterator it = ransom.begin() ; it != ransom.end(); ++it)
    {
        if(magazineIndex.count(*it)<1) 
        { 
            
                return false;
        }
        else{
            if(magazineIndex[*it]<1)
                return false;
            magazineIndex[*it]--;
        }
      //  cout<<*it<<" "<<magazineIndex[*it]<<endl;
        
    }
  
    
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}

