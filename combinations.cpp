#include <bits/stdc++.h>
using namespace std;

int x[100], n, k;
void print(){
	for(int i = 1; i <= k; i++) cout << x[i] << " ";
	cout << endl;
}

int Try(int y){
	for(int v = x[y-1] + 1; v <= n-k+y; v++){
		x[y] = v;
		if(y == k) print();
		else{
			Try(y+1);
		}
	}	
}


int main(){
	cin >> n >> k;
	Try(1);	
	return 0;
}
