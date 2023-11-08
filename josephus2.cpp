#include <bits/stdc++.h>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set = tree<T,null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k; cin >> n >> k;
	ordered_set<int> o;
	for (int i = 1; i <= n; i++)
        o.insert(i);
    int startPos = 0;
    while(o.size() > 0){
    	startPos %= o.size();
    	int posRem = (startPos+k)%o.size();
    	startPos = posRem;
    	auto t = o.find_by_order(posRem);
    	cout << *t << " ";
    	o.erase(t);
	}
	return 0;
}
