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


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
       // Creates a max heap
    priority_queue <int> first;
    priority_queue <int, vector<int>, greater<int> > second;
    int count_first=0,count_second=0;
    
    
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       if(count_first==0&&count_second==0)
       {
           first.push(a[a_i]);
           ++count_first;
       }
       else{
       if(first.top()>a[a_i])
       {
           first.push(a[a_i]);
           ++count_first;
           if(count_first>count_second)
       {
           second.push(first.top());
           ++count_second;
           first.pop();
           --count_first;
       }
       }
           
           
           
       
       else
       {
       if(count_second<=count_first)
       {
           second.push(a[a_i]);
           ++count_second;
       }
       else{
           second.push(a[a_i]);
           first.push(second.top());
           second.pop();
           
           ++count_first;
       }
       }
      
       }
       if(count_first==count_second)
       {
           float ans=(float)(first.top()+second.top())/(float)2;
          printf("%.1f\n", ans);
       }
        else if(count_first>count_second)
        {
            float ans=(float)first.top();
            printf("%.1f\n", ans);

        }
        else
        {
            float ans=(float)second.top();
            printf("%.1f\n", ans);


           //cout<<ans <<endl;
        }
       
    }
    return 0;
}

