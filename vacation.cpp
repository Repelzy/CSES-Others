#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> dp(3);
	for(int d = 0; d < n; ++d){
		vector<int> new_dp(3, 0);
		vector<int> c(3);
		for(int i = 0; i < 3; i++){
			cin >> c[i];
		}
	for(int i = 0; i <  3; i++){
		for(int j = 0; j < 3; j++){
			if(i!=j){
				new_dp[j] = max(new_dp[j], dp[i] + c[j]);
			}
		}
	}
	dp = new_dp;
}
cout << max(max(dp[0], dp[1]), dp[2]) << endl;

	 
	return 0;
}
