#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n ; cin >> n;
	vector<pair<ll, ll>> v;
	for(int i = 0; i < n; i++){
		ll a,b; cin >> a >> b;
		v.push_back({a,1});
		v.push_back({b,-1});
	}
	sort(v.begin(), v.end());
	ll ans = 0, max_customers = 0;
	for(int i = 0; i < v.size(); i++){
		ans += v[i].second;
		max_customers = max(ans, max_customers);
	}
	cout << max_customers << endl;
	return 0;
}

