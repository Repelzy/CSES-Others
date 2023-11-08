// dp using 1D
#include <bits/stdc++.h>
using namespace std;

const int mdx = 1e3; 
const int mnx = 1e5;
int n, x, h[mdx], s[mdx]; 
int dp[mnx + 1];


int main(){
	cin >> n >> x;
	for(int i = 0; i < n ; i++) cin >> h[i];
	for(int i = 0 ; i < n; i++) cin >> s[i];
	for(int i = 0 ; i < n ; ++i){
		for(int j = x; j >=h[i]; --j){
			dp[j] = max(dp[j], dp[j-h[i]] + s[i]);
		}
	}
	cout << dp[x];
	
	return 0;
}

// dp using 2D 
//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//	int n, x; cin >> n >> x;
//	vector<int> price(n);
//	vector<int> pages(n);
//	for(int &v : price){
//		cin >> v;
//	}
//	for(int &v : pages){
//		cin >> v;
//	}
//	vector<vector<int>> dp(n+1,vector<int>(x+1,0));
//	for(int i = 1; i <= n; ++i){
//		for(int j = 0; j <= x; ++j){
//			dp[i][j] = dp[i-1][j];
//			if(j >= price[i-1]){
//				dp[i][j] = max(dp[i][j], pages[i-1] + dp[i-1][j - price[i-1]]);
//			}
//		}
//	}
//	cout << dp[n][x] << " ";
//	
//	return 0;
//}
//

