#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vl = vector<ll>;


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    int n;
    cin >> n;
    ll ans = 0;
    map<ll, ll> modCount;
    ll sum = 0;
    modCount[0] = 1;
    vl arr(n+1);
    
    for (ll i = 1; i <= n; i++) {
        cin >> arr[i];
	}
	
	for (ll i = 1; i <= n; i++)
	{
		sum += arr[i]%n;	
		sum = (sum+n)%n; //handle negative values
		ans += modCount[sum];
		modCount[sum]++;
	}
	cout << ans << endl;
	return 0;
}
