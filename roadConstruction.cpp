#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int parent[MAXN], setSize[MAXN], components, maxSize;
int n, m ;

void make_set(){
	for(int i = 1; i <= n; i++){
		parent[i] = i;
		setSize[i] = 1;
 	}
}

int find(int u){
	if(u == parent[u]){
		return u;
	}
	return parent[u] = find(parent[u]);
}

void unite(int a, int b){
	a = find(a);
	b = find(b);
	if(a != b){
		if (setSize[a] < setSize[b]) swap(a,b);
		parent[b] = a;
		setSize[a] += setSize[b];
        maxSize = max(maxSize, setSize[a]);
        components--;
	}
}

int main(){
	cin >> n >> m;
	make_set();
    components = n;
    maxSize = 1;

	vector<pair<int, int>> ans;
	
   	while(m--){
   		int a,b; cin >> a >> b;
   		unite(a,b);
   		ans.push_back({components, maxSize});
   	}
   	for(auto &anss : ans){
        cout << anss.first << " " << anss.second << '\n';
    }
	return 0;
}
