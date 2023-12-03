#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mxN = 2e5 + 5;
vector<int> child[mxN];
int num_emp[mxN];

int dfs(int u){
    int res = 0;
    for(int v : child[u]){
        res += dfs(v) + 1;
    }
    num_emp[u] = res;
    return res;
}

int main(){
    ll n ; cin >> n;
    for(int i = 2; i < n+1; i++){
        int p; cin >> p;
        child[p].push_back(i);
    }
    dfs(1);
    for(int i = 1; i <= n; i++){
        cout << num_emp[i] << " ";
    }
}