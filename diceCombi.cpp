#include <bits/stdc++.h>
using namespace std;

int main(){
	int mod = 1e9 + 7;
	int n; cin >> n;
	vector<int> dp(n + 1, 0);
	dp[0] = 1;
	for(int x =1; x <= n; x++){
		for(int y = 1; y <= 6;y++){
			if(x-y >= 0){
				(dp[x] += dp[x-y]) %= mod;
			}
		}
	}
	cout << dp[n] << endl; 
	return 0;
}
