#include <bits/stdc++.h>
using namespace std;
using ll= long long;

int n;
vector<long long>weights;

ll recursive_apples(int j, ll sum1, ll sum2){
	if(j == n){
		return abs(sum1 - sum2);
	}
	return min(recursive_apples(j+1, sum1+ weights[j], sum2), recursive_apples(j+1, sum1, sum2+weights[j]));
}



int main(){
	cin >> n;
	weights.resize(n);
	for(int i = 0; i < n ; i++) {
	cin >> weights[i];}
	cout << recursive_apples(0,0,0) << endl;
	
	
	return 0;
}
