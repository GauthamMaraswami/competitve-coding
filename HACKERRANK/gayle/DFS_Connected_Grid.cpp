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

int get_region_count(int grid[11][11],int i,int j,int m,int n)
{
     
    if(i<0||j<0||i>=m||j>=n)
          return 0;
    else if(grid[i][j]==0)
        return 0;
    //cout<<i<<" "<<j<<endl;
    
    /*for(int i=0;i<m;++i)
   {
       for(int j=0;j<n;++j)
       {
           cout<<grid[i][j] <<" ";
       }
        cout<<endl;
    }
    cout<<endl;*/
    int count = 1;
    grid[i][j]=0;
    count+=get_region_count(grid,i+1,j,m,n);
    count+=get_region_count(grid,i,j+1,m,n);
    count+=get_region_count(grid,i,j-1,m,n);
    count+=get_region_count(grid,i+1,j+1,m,n);
    count+=get_region_count(grid,i+1,j-1,m,n);
    count+=get_region_count(grid,i-1,j,m,n);
    count+=get_region_count(grid,i-1,j-1,m,n);
    count+=get_region_count(grid,i-1,j+1,m,n);
    return count;
}
//int get_biggest_region(vector< vector<int> > &grid) {
int get_biggest_region(int grid[11][11],int m,int n) {
     int max1 = 0;
   
   for(int i=0;i<m;++i)
   {
       for(int j=0;j<n;++j)
       {
           max1=max(max1,get_region_count(grid,i,j,m,n));
       }
   }
    return max1;
}

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    //vector< vector<int> > grid(n,vector<int>(m));
    int grid[11][11];
    for(int grid_i = 0;grid_i < n;grid_i++){
       for(int grid_j = 0;grid_j < m;grid_j++){
          cin >> grid[grid_i][grid_j];
       }
    }
    cout << get_biggest_region(grid,n,m) << endl;
    return 0;
}

