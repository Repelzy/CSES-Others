#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

const int mod = 1e9 + 7;
const int mxN = 5e2;

int main(){
	int n;
	cin >> n;
	ll dp[mxN*(mxN+1) / 2 + 1];
	dp[0] = 1;
	int sum = n*(n+1) / 2;
	if(sum % 2 != 0){
		cout << 0 << endl;
    	return 0;
	}
	sum /= 2;
	for(int i = 1; i <=n ; i++){
		for(int j = i*(i+1) / 2; j>= i ; --j){
			dp[j] = (dp[j] + dp[j - i]) % mod;
		}
	}
	cout << dp[sum] * ((mod+1) / 2) % mod;  
	
	return 0;
}
