#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    vector<int> a;
    for(int i = 0; i < n;i++){
        int v; 
        cin >> v;
        int index = upper_bound(a.begin(), a.end(), v) - a.begin();
        if(index == a.size()){
            a.push_back(v);
        } else {
            a[index] = v;
        }
    } 
    cout << a.size() << endl;
    
    return 0;
}
