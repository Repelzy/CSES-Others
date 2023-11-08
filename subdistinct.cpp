#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    ll ans = 0;
    map<int, int> mp;
    int j = 0, i = 0;
    while(j<n){
    	mp[x[j]]++;
    	while(mp.size() > k){
    		mp[x[i]]--;
    		if(mp[x[i]] == 0) mp.erase(x[i]);
    		i++;
		}
		ans += j-i+1;
		j++;
	}
    cout << ans << endl;

    return 0;
}

