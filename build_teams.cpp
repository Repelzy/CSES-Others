#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
vector<vector<int>> adj;
vector<bool> visited;
vector<bool> team;
bool color;

void dfs(int u){
    for(int v : adj[u]){
        if(!visited[v]){
            team[v] = !team[u];
            visited[v] = true;
            dfs(v);
        }
        else{
            if(team[v] == team[u]){
                color = false;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1);
    team.resize(n + 1);
    for(int i = 0; i<m ; i++){
        int x,y ; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);       
    }
    fill(visited.begin(), visited.end(), false);
    
    color = true;
    for(int i = 1; i<=n;i++){
        if(!visited[i]){
            visited[i] = true;
            dfs(i);
        }
    }
    if(!color)
        printf("IMPOSSIBLE\n");
    else{
        for(int i = 1; i <= n; i++){
            if(team[i]){
                cout << 1 << " ";
            }
            else{
                cout << 2 << " ";
            }
        }
        cout << endl;
    }    
            
    return 0;
}

