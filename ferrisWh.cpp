#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n, x; cin >> n >> x;
	vector<ll> p(n);
	for(int i = 0; i <n; i++){
		cin >> p[i];
	}
	sort(p.begin(), p.end());
	ll ans = 0;
	int l = 0;
	for(int r = n-1; r >= l; r--){
		if(p[l] + p[r] <= x){
			l++;
		}
		ans++;
	}
	cout << ans << endl;
	return 0;
}
