#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> k(n);
   	for(int i = 0; i < n; ++i) cin >> k[i];
   	stack<pair<ll,ll>> s;
   	ll ans = 0;
   	for(int i =0; i < n; i++){
   		int start = i;
   		while(!s.empty() && k[i] < s.top().second){
   			  pair<ll,ll> new_cur = s.top();
   			  s.pop();
   			  start = new_cur.first;
   			  ans  	= max(ans, (i-new_cur.first) * new_cur.second);
		}
		s.push({start, k[i]});
	}
		while(!s.empty()){
		 	pair<ll,ll> new_cur = s.top();
   			s.pop();
   			int start = new_cur.first;
   			ans  = max(ans, (n-new_cur.first) * new_cur.second);
	}
	cout << ans;
		
	return 0;
}
