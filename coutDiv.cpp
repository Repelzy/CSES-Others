#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mxA = 1e6;
int max_div[mxA];

int main(){
	for (int i = 2; i <= mxA; i++) {
		if (max_div[i] == 0) {
			for (int j = i; j <= mxA; j += i) { max_div[j] = i; }
		}
	}
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		int div_num = 1;
		while (x != 1) {
			/*
			 * get the largest prime that can divide x and see
			 * how many times it goes into x (stored in count)
			 */
			int prime = max_div[x];
			int count = 0;
			while (x % prime == 0) {
				count++;
				x /= prime;
			}
			div_num *= count + 1;
		}
		cout << div_num << '\n';
	}
	return 0;
}

