#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> height(n);
	for(int i = 0; i< n;i++){
		cin >> height[i];
	}
	vector<int> dp(n, INT_MAX);
	dp[0] = 0;
	for(int i = 0; i < n-1; i++){
		dp[i+1] = min(dp[i+1], dp[i] + abs(height[i] - height[i+1]));
		if(i < n-2){
			dp[i+2] = min(dp[i+2], dp[i] + abs(height[i] - height[i+2]));
		}
	}
	cout << dp[n-1] << endl;
	
	
	return 0;
}
