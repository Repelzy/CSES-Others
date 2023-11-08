#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x ; cin >> n >> x;
	vector<int> c(n);
	for(int i = 0; i < n;i++){
		cin >> c[i];
	}
	vector<int> dp(x+1, 1e9);
	dp[0] = 0;
	for(int i = 1; i<=n; ++i){
		for(int j = 0; j <= x; ++j){
			if(j - c[i-1] >= 0){
				dp[j] = min(dp[j], dp[j - c[i-1]] + 1);
			}
		}
	}
	cout << (dp[x] == 1e9 ? -1 : dp[x]) << endl;

	
	
	return 0;
}
