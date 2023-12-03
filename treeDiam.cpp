#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX = 2e5 + 5; 
vector<int> adj[MAX];
int maxD = 0;
int maxNode;
int vis[MAX]; 

void dfs(int u, int d){
    vis[u] = 1;
    if (d > maxD){
        maxD = d;
        maxNode = u;
    }
    for(int v : adj[u]){
        if (vis[v] == 0){
            dfs(v, d+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    ll n; cin >> n;
    for(ll i = 0; i < n-1; i++){
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    maxD = -1;
    dfs(1, 0);
    for(int i = 1; i <= n; i++) vis[i] = 0;
    dfs(maxNode, 0);
    cout << maxD << endl;
}