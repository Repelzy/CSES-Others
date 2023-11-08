#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mod = 1e9 + 7;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<vector<char>> grid(N, vector<char>(N));
	vector<vector<bool>> valid(N, vector<bool>(N));
	vector<vector<ll>> dp(N+1, vector<ll>(N+1));
	
	for(int i = 0; i < N ;++i){
		for(int j = 0; j < N ; j++){
			cin >> grid[i][j];
			if(grid[i][j] == '.') valid[i][j] = true;
			else valid[i][j] = false;
		}
	}
	dp[0][0] = valid[0][0] ? 1 : 0;
	for(int i = 0 ; i < N; i++){
		for(int j = 0; j < N; j++){
			if (!valid[i][j]) dp[i][j] = 0;
			else{
				if (i > 0) dp[i][j] += dp[i - 1][j];
				if (j > 0) dp[i][j] += dp[i][j - 1];
				dp[i][j] %= mod;
			}
		}
	}
	cout << dp[N - 1][N - 1] << "\n";
	return 0;
}

