#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int n; cin >> n;
    ll a[n];
    ll sum = 0;
    ll ans = 0;
    for(int i = 0; i < n ; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a+n);
    ans = max(sum, (ll)a[n-1]*2);
    cout << ans << endl;
}