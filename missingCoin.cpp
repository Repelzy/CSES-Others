#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n;i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end());
	long long ans = 1;
	for(int i = 0; i < n && ans >= a[i]; i++){
		ans += a[i];
	}
	cout << ans << '\n';
	return 0;
}
