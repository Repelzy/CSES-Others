#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, m, k;
    cin >> n >> m >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = 0;
    int i = 0, j = 0;
    while(i < n && j < m){
    		if(abs(a[i] - b[j]) <= k){
    		ans++;
    		i++;
    		j++;
		}
		else if(a[i] < b[j]){
			i++;
		}
		else{
			j++;
		}
	}
	cout << ans << endl;

    return 0;
}

