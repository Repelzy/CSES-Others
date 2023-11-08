#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m ; cin  >> n >> m;
    vector<int> x(n+1);
    vector<int> pos(n+1);
    map<int, int> numpairs;
    for(int i = 1 ; i <=n ; ++i){
        cin >> x[i];
        pos[x[i]] = i;
    }
    int ans = 1; 
    for(int i = 1; i < n; ++i){
        if(pos[i+1] < pos[i]){
            ans++;
        }
    }
    int l, r;
    while(m--){
       cin >> l >> r;
       if(x[l] - 1 >= 1){
       		numpairs.insert({x[l] - 1, x[l]});
	   }
	   if(x[l] + 1 <= n){
	   		numpairs.insert({x[l], x[l] + 1});
	   }
       if(x[r] - 1 >= 1){
       		numpairs.insert({x[r] - 1, x[r]});
	   }
	   if(x[r] + 1 <= n){
	   		numpairs.insert({x[r], x[r] + 1});
	   }
	   for(auto it= numpairs.begin(); it != numpairs.end(); it++){
	   		if (pos[it->first] > pos[it->second]){
	   				ans--;
			   } 
	   }
	   swap(x[l], x[r]);
	   pos[x[l]] = l;
	   pos[x[r]] = r;
       for(auto it= numpairs.begin(); it != numpairs.end(); it++){
	   		if (pos[it->first] > pos[it->second]){
	   				ans++;
			   } 
	   }
	   cout << ans << '\n';
	   numpairs.clear();
	}
       
    return 0;
}

