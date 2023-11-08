#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, target;
    cin >> n >> target;
    vector<pair<long long, int>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    
    sort(v.begin(), v.end());
    
    int left = 0, right = n - 1;
    while(left < right){
        if(v[left].first + v[right].first == target){
            cout << v[left].second << " " << v[right].second << endl;
            return 0;
        } else if(v[left].first + v[right].first < target){
            left++;
        } else {
            right--;
        }
    }
    
    cout << "IMPOSSIBLE" << endl;
    
    return 0;
}

