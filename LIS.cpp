// O(nlogn)

#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n;i++){
        int v; 
        cin >> v;
        int index = lower_bound(a.begin(), a.end(), v) - a.begin();
        if(index == a.size()){
            a.push_back(v);
        } else {
            a[index] = v;
        }
    } 
    cout << a.size() << endl;
    
    return 0;
}

// O(n^2)
//#include<bits/stdc++.h>
//using namespace std;
//using ll = long long;
//
//const int mxN = 2e5;
//
//int main(){
//    int n; cin >> n;
//    ll dp[mxN+1];
//    vector<int> x(n);
//    for(int i = 0; i < n; ++i){
//        cin >> x[i];
//    }
//    for(int i = 0; i < n; ++i){
//        dp[i] = 1;
//        for(int j = 0; j < i ; j++){
//            if(x[j] < x[i]){
//                dp[i] = max(dp[i], 1 + dp[j]);
//            }
//        }
//    }
//    ll ans = 0;
//    for(int i = 0; i < n; ++i){
//        ans = max(ans, dp[i]);
//    }
//    cout << ans << endl;
//    
//    return 0;
//}
//

