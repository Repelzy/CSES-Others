#include <iostream>
#include <vector>
using namespace std;

const int MAX_X= 1e3, MAX_Y = 1e5;
int n, x[MAX_X], dp[MAX_Y+ 1];

int main() {
	cin >> n;
	for(int i = 0; i < n; ++i) cin >> x[i];
	dp[0] = 1;
	for(int j = 0; j < n; j++){
		for(int i = MAX_Y; i >= x[j]; i--){
			dp[i] = dp[i] | dp[i-x[j]];
		}
	}
    vector<int> res;
    for(int i = 1; i <= MAX_Y ; i++){
    	if (dp[i] == 1){
    		res.push_back(i);
		} 
	}
	cout << res.size() << "\n";
	for(int a : res){
		cout << a << " ";
	}
}

