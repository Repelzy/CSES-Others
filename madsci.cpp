#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ll n ; cin >> n;
	ll change = 0;
	string A;
	string B;
	cin >> A >> B;
	bool mismatched = false;
	for(ll i = 0; i < n ;i++){
		if(A[i] != B[i]){
			if(!mismatched){
				mismatched = true;
				change++;
			}
		}
			else{
				mismatched = false;
			}
		}
		cout << change << endl;
		 
	
	
	return 0;
}
