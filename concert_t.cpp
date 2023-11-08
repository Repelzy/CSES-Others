#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll n, m ; cin >> n >> m;
    multiset<ll> h;
    vector<ll> t(m);
    for(ll i = 0; i< n; i++){
        ll x; cin >> x;
        h.insert(x);
    }
    for(ll j = 0; j<m;j++){
        cin >> t[j];
        auto it = h.upper_bound(t[j]);
        if (it == h.begin()) {
            cout << -1 << '\n';
        }
        else{
            it--;
            cout << *it << '\n';
            h.erase(it);
        }
    }
    return 0;
}

