#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll x, n; cin >> x >> n;
	set<int> p;
	multiset<int> length_p;
	p.insert(0);
	p.insert(x);
	length_p.insert(x);
	for(int i = 0; i < n; i++){
		int val; cin >> val;
		p.insert(val);
		auto it = p.find(val);
		auto prevVal = *prev(it);
		auto nextVal = *next(it);
		length_p.erase(length_p.find(nextVal - prevVal));
		length_p.insert(val - prevVal);
		length_p.insert(-val + nextVal);
		cout << *length_p.rbegin() << " ";
	}
	return 0;
}
