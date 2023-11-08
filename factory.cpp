#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	ll n, t; cin >> n >> t;
	vector<ll> k(n);
	for(ll i = 0; i<n; ++i){
		cin >> k[i];
	}
	ll lo = 0; 
	ll time = 1e18; 
	ll hi = 1e18;
	while(lo <= hi){
		ll sum = 0; 
		ll mid = (lo+hi) / 2;
		for(ll i = 0; i< n; i++){
			sum += mid/k[i];
			if(sum >= t) break;
		}
		if(sum >= t ){
				time = mid;
				hi = mid - 1;
			}
		else{
			lo = mid + 1;
		}
	} 
	cout << time << " ";
	return 0;
}
