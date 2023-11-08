#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll median = a[n / 2]; 
    
    ll res = 0;
    for (int i = 0; i < n; i++) {
        res += abs(a[i] - median);
    }
    cout << res << endl;

    return 0;
}
