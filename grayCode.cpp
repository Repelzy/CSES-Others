#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n; cin >> n;
	for(int i = 0; i < (1 << n); i++){
		ll x = i ^ (i >> 1);
		bitset<64> a(x);
		string b = a.to_string();
		cout << b.substr(64-n) << endl;
		}
	return 0;
}

