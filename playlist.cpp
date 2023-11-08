// using deque
#include <bits/stdc++.h>
using namespace std;

const int maxN = 2*1e5;
int n;
int a[maxN];

int main(){
	cin >> n;
	for(int i =0; i < n; ++i) cin >> a[i];
	set<int> s;
	int r = -1;
	int res = 0;
	for(int i = 0; i < n;++i)
	{
		while(r < n-1 && !s.count(a[r+1])){
			r++;
			s.insert(a[r]); 
		}	
		res = max(res, r-i+1);
		s.erase(a[i]);
	}
	cout << res << endl;
	return 0;
}

// using map#include <iostream>
//#include <map>
//#include <queue>
//using namespace std;
//
//long long n;
//map<int,int> m = {};
//queue<int> q;
//
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    int x, y;
//    int res = 0, ans = 0;
//    cin >> n;
//    for(int i = 0; i < n; i++){
//        cin >> x;
//        if(m[x] == 0){
//            res++;
//            q.push(x);
//            m[x] = 1;
//        }
//        else{
//            ans = max(res, ans);
//            while(q.front() != x){
//                res--;
//                m[q.front()] = 0;
//                q.pop();
//            }
//            q.pop();
//            q.push(x);
//        }
//    }
//    y = q.size();
//    ans = max(ans, y);
//    cout << ans << endl;
//    return 0;
//}

