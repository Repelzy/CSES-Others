#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MAXN = 1e5 + 5;
int parent[MAXN], sz[MAXN];
int n, m ;
ll cost = 0;

void make_set(){
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		sz[i] = 1;
 	}
}

int find(int u){
	if(u == parent[u]){
		return u;
	}
	return parent[u] = find(parent[u]);
}

void unite(int a, int b, int c){
	a = find(a);
	b = find(b);
	if(a != b){
		if (sz[a] < sz[b]) swap(a,b);
		parent[b] = a;
		sz[a] += sz[b];
        cost += c;
	}
}

int main(){
	cin >> n >> m;
	make_set();
	vector<tuple<int, int, int>> roads(m);
	for(int i =0; i < m; ++i) {
		int a,b,c; cin >> a >> b >> c;
		roads[i] = make_tuple(c, a, b);
	}
	sort(roads.begin(), roads.end());
	for(auto &x : roads){
		int c, a, b;
		tie(c,a,b) = x;
		unite(a,b,c);
	}
	if(sz[find(1)] == n) cout << cost << '\n';
	else{
		cout << "IMPOSSIBLE" << '\n';
	}
	return 0;
}



