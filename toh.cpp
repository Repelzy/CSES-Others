// print out pair 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void toh(vector<pair<int, int>> &a, int n, int from, int to, int aux){
    if(n == 1){
        a.push_back({from, to});
        return;
    }
    toh(a,n-1,from, aux, to);
    a.push_back({from, to});
    toh(a,n-1,aux, to, from); 
}

int main(){
    vector<pair<int, int>> x;
    ll n ; cin >> n;
    toh(x, n, 1 , 3, 2);
    cout << x.size() << endl;
    for(auto o : x){
        cout << o.first << " " << o.second << endl;
    }
    return 0;
}


// another idea using 1+2+3 = 6
//#include <iostream>
//using namespace std;
//
//void hanoi(int n, int s, int e){
//	if(n == 0) return;
//	int other = 6 - (s + e);
//	hanoi(n - 1, s, other);
//	cout << s << " " << e << endl;
//	hanoi(n-1, other, e);
//}
//
//int main(){
//	int n; cin >> n;
//	cout << (1<<n)-1 << endl;
//	hanoi(n, 1, 3);
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//void move(int n, char A, char B, char C){
//	if(n == 1) cout << "Move 1 disk from" << " " <<  A << " " << "to" << " " << B << '\n';
//	else{
//	move(n-1, A, C, B);
//	move(1, A, B, C);
//	move(n-1, C, B, A);
//	}	
//}
//int main(){
//	int n = 3;
//	move(n, 'A', 'B', 'C');
//	return 0;
//}

