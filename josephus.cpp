#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	int n; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		a[i] = i+1;
	}
	while(a.size() > 1){
		vector<int> b;
		for(int i = 0; i < a.size(); i++){
			if(i%2 == 1){
				cout << a[i] << " ";
			}
			else{
				b.push_back(a[i]);
			}
		}
		if(a.size()%2 == 0){
			a = b;
		}
		else{
			int s = b.back();
			b.pop_back();
			a.clear();
			a.push_back(s);
			for(int v : b){
				a.push_back(v);
			}
		}
	}
	cout << a[0];
	return 0;
}
