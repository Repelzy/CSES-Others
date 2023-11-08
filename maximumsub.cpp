//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//
//int main(){
//	int n; cin >> n;	
//	vector<long long> prefix(n+1);
//	for(int i = 1 ; i<=n; i++){
//		ll x; cin >> x;
//		prefix[i] = prefix[i - 1] + x;
//	}
//	ll prefixMax = prefix[1];
//	ll prefixMin = prefix[0];
//	for (int i = 1; i <= n; i++) {
//		prefixMax = max(prefixMax, prefix[i] - prefixMin);
//		prefixMin = min(prefixMin, prefix[i]);
//	}
//	cout << prefixMax << endl;
//	return 0;
//}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	vector<ll> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	ll temp = 0; ll sum = 0;
	ll maxElement = *max_element(a.begin(), a.end());
	for(int i = 0; i < n ;i++){
		if(temp + a[i] < 0) {
			temp = 0;
		}
		else{
			temp += a[i];		
		}
		sum = max(temp, sum);
	}
	if(sum <= 0){
		cout << maxElement;
	}
	else{
		cout << sum;
	}
	return 0;
}

