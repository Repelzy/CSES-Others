#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
bool check(ll mid, vector<ll> &v, ll k) {
	ll sum  = 0; int cnt = 1;
	for(int i = 0; i < v.size(); i++){
		if(sum + v[i] > mid){
			cnt++;
			sum = v[i];
		}
		else {
            sum += v[i];
        }
	}
	if(cnt > k){
		return false;
	}
	return true;
}
 
int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    ll maxSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxSum = max(maxSum, v[i]);
    }
    ll lo = maxSum, hi = 1e18;
    while (lo < hi) {
        ll mid = lo + (hi - lo) / 2;
        if (check(mid, v, k)) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
    cout << lo << endl;
 
    return 0;
}
