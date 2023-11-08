#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	vector<pair<int, int>> x(n);
	for(int i = 0; i < n; i++){
		cin >> x[i].first;
		x[i].second = i;
	}
	sort(x.begin(), x.end());
	int cnt = 1; 
	for(int i = 1; i < n; ++i){
		if(x[i].second < x[i-1].second) cnt++;
	}
	cout << cnt;
	
	return 0;
}
