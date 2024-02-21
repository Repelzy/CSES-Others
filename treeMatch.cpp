#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAX = 2e5 + 5; 
vector<int> adj[MAX];
int dp[MAX][2];

void dfs(int u, int v){
    for(int i : adj[u]){
        if(i != v){
            dfs(i, u);
            dp[u][0] += max(dp[i][0], dp[i][1]);
        }
    }
    for(int i : adj[u]){
        if(i != v){
             dp[u][1] = max(dp[u][1], dp[i][0] + 1 + dp[u][0] -
			                             max(dp[i][0], dp[i][1]));
        }
    }
}

int main(){
    int a,b;
    int n; cin >> n;
    for(int i = 1; i<n; i++){
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,0);
    cout << max(dp[1][0], dp[1][1]) << '\n';
}
