#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 2e5;
int q,n;
int arr[MAX_N + 1];
int prefix[MAX_N + 1];
int a,b;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> q;
	
	for(int i = 1; i<=n; ++i){
			cin >> arr[i];
	}
	prefix[1] = arr[1];
	for(int i =2 ; i<= n;++i){
		prefix[i] = prefix[i-1] ^ arr[i];
	}	
	 	
	while(q--){
		cin >> a >> b;
		cout << (prefix[a-1] ^ prefix[b]) << endl;
	}
	
	
	return 0;
}

