#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
	stack<pair<int,int>> s;
	for(int i = 0; i < n;i++){
		while(s.size() > 0 && s.top().first >= a[i]){
			s.pop();
		}
		if(s.size() > 0){
			cout << s.top().second << " "; 
		}
		else{
			cout << 0 << " ";
		}
		s.push({a[i], i+1});
	}
	return 0;
}
