#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	ll n,x; cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    map<int, pair<int, int>> mp;
	for(int i =0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(mp.count(x-a[i] - a[j])){
				 cout << i+1 << " "<< j+1 << " " << mp[x-a[i]-a[j]].first + 1 << " " << mp[x-a[i]-a[j]].second + 1;
				 return 0;
			}
		}
		for(int j = 0; j < i; j++){
			mp[a[i] + a[j]] = {i,j};
		}
	}
	cout << "IMPOSSIBLE"; 						 
	return 0;
}
