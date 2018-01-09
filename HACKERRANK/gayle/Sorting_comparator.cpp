#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
}; 

vector<Player> comparator(vector<Player> players) {
    Player temp;
    for(int i=0;i<players.size();++i)
    {
        for(int j=i;j<players.size();++j)
        {
            if(players[j].score>players[i].score)
            {
                temp=players[j];
                players[j]=players[i];
                players[i]=temp;
            }
            else if(players[j].score==players[i].score)
            {
                if(players[i].name>players[j].name)
                {
                     temp=players[j];
                players[j]=players[i];
                players[i]=temp;
                }
            }
        }
    }
     return players;
}

int main() {
    
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }
    
    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}

