#include <bits/stdc++.h>
using namespace std;
using ll  = long long;

int main(){
	int n,k;
	cin >> n >> k;
	vector<pair<int,int>> v(n);
	for(int i = 0; i < n;i++){
		cin >> v[i].second >> v[i].first;
	}
	sort(v.begin(), v.end());
	int bMovies = 0;
	set<pair<int, int>> se;
	for(int i = 0; i < n; i++){
		if(se.size() == 0){
			se.insert({v[i].first*-1, i});
		}
		else{
			auto it = se.lower_bound({v[i].second*-1, -1});
			if(it != se.end()){
				se.erase(it);
				se.insert({v[i].first*-1, i});
			}
			else if(it == se.end() && se.size() < k){
				se.insert({v[i].first*-1, i});
			}
			else{
				bMovies++;
			}
		}
	}
	cout << n - bMovies << endl;
	
	return 0;
}

