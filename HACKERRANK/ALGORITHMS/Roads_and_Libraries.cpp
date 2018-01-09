#include <bits/stdc++.h>

using namespace std;
       vector <int> adj[100005];
        bool visited[100005];
long nodes;
void dfs(int n){
    nodes++;
        visited[n]=true;
    //cout<<"node "<<n<<"=>";
    for(vector<int>::iterator i = adj[n].begin(); i != adj[n].end() ; i++)
    {
        if(!visited[*i]){
           
            dfs(*i);
        }
    }
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int m;
        long x;
        long y;
        long cost=0;
        cin >> n >> m >> x >> y;
        for(int a1 = 0; a1 < m; a1++){
            int city_1;
            int city_2;
            cin >> city_1 >> city_2;
            adj[city_1].push_back(city_2);
            adj[city_2].push_back(city_1);
        }
        for(int i=1;i<=n;++i){
          
            
            if(visited[i]==false)
            {
                  nodes=0;
                dfs(i);
            cost=cost+x;
                if(x> y)
                    cost = cost + (y*(nodes-1));
                else
                    cost = cost + (x*(nodes-1));
            }        
            
        }
         cout <<cost << endl;
        for(int i=0 ; i<=n ; i++)
        {
            adj[i].clear();
            visited[i] = false;
        }
    }
    return 0;
}

