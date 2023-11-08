#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    ll ans = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 0, r = 0;
    ll sum = 0;
    while(r < n){
        sum += a[r];
        while(sum >= x){
            if(sum == x){
                ans++;
            }
            sum -= a[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}

