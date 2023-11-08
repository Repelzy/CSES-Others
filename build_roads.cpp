#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n,m;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> components;

void input(){
    cin >> n >> m;
    adj.resize(n + 1);
    visited.resize(n + 1);
    for(int i = 0; i<m ; i++){
        int x,y ; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);       
    }
    fill(visited.begin(), visited.end(), false);
}


void dfs(int u){
    visited[u] = true;
    for(int v : adj[u]){
        if (!visited[v]){
            dfs(v);
        }
    }    
}

int count(){
    int cnt = 0;
    for(int i = 1; i<=n;i++){
        if(!visited[i]){
            cnt++;
            components.push_back(i);
            dfs(i);
        }
    }
    return cnt;
}


int main(){
    input();
    int ans = count();
    cout << ans - 1 << endl;
    for(int i = 1; i< ans; i++){
        cout << components[i-1] << " " << components[i] << endl;
    }
    return 0;
}

