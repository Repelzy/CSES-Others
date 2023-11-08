#include <bits/stdc++.h>
using namespace std; 
using ll = long long;
using vl = vector<ll>;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    ll n, x; 
    cin >> n >> x;
    ll ans = 0;
    vl arr(n+1);
    unordered_map<ll, ll> prefixSumCount;
    ll prefixSum = 0;
    
    prefixSumCount[0] = 1; 
    
    for (ll i = 1; i <= n; i++) {
        cin >> arr[i];
        prefixSum += arr[i];

        ans += prefixSumCount[prefixSum - x];
        
        prefixSumCount[prefixSum]++;
    }
    
    cout << ans << endl;
    
    return 0;
}

