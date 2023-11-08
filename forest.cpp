#include <iostream>
using namespace std;

const int E = 1000;
int tree_pref[E + 1][E + 1];
int forest[E + 1][E + 1];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int Q;
	cin >> N >> Q;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			char a;
			cin >> a;
			forest[i + 1][j + 1] += a == '*';
		}
	}
	
	for(int i = 1 ; i <= N ; i++){
		for(int j = 1; j<=N; j++){
			tree_pref[i][j] = forest[i][j] + tree_pref[i - 1][j] + 
							tree_pref[i][j - 1] - tree_pref[i - 1][j - 1];
		}
	}
	for(int q = 0; q < Q; q++){
		int row, row_des, col, col_des;
		cin >> row >> col >> row_des >> col_des;
		cout << tree_pref[row_des][col_des] - tree_pref[row-1][col_des] 
				- tree_pref[row_des][col-1] + tree_pref[row-1][col-1] << '\n'; 
	}
	
	
	return 0;
}
