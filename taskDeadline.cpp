#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<pair<ll,ll>> a(n);
    for(int i = 0; i < n ; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end());
    ll reward = 0;
    ll totalTime = 0;
    for(int i = 0; i < n ;i++){
        totalTime += a[i].first;
        reward += a[i].second - totalTime;
    }
    cout << reward << endl;
}