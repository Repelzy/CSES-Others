#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k; cin >> n >> k;
	vector<int> height(n);
	for(int i = 0; i< n;i++){
		cin >> height[i];
	}
	vector<int> dp(n, INT_MAX);
	dp[0] = 0;
	for(int i = 0; i < n; i++){
		for(int j = i+1; j <= min(i+k, n-1) ; j++){
			if (dp[j] > dp[i] + abs(height[i] - height[j])){
				dp[j] = dp[i] + abs(height[i] - height[j]);
			}
		}
	}
	cout << dp[n-1] << endl;
	
	return 0;
}
