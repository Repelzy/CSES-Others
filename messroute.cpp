#include <bits/stdc++.h>
using namespace std;

const int N = 100001;
int n, m;
vector<int> adj[N+1];
vector<int> dist(N+1, INT_MAX);
bool visited[N+1];
int parent[N+1];

int main(){
	cin >> n >> m;
	while(m--){
		int a,b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	queue<int> q;
	q.push(1);
	visited[1] = true;
	dist[1] = 0;
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(int x : adj[u]){
			if(!visited[x]){
				visited[x] = true;
				dist[x] = dist[u] + 1;
				parent[x] = u;
				q.push(x);
			}
		}
	}
	if(dist[n] == INT_MAX) 
	{ 
		cout << "IMPOSSIBLE";
	}
	else{
        cout << dist[n] + 1 << "\n";
		vector<int> path={n};
		while(path.back() != 1) path.push_back(parent[path.back()]);
		reverse(path.begin(), path.end());
		for(int t : path) cout << t << " ";
	}
	return 0;
}

