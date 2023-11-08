#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
bool canSortArray(vector<int>& a) {
    int n = a.size();
    
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            even.push_back(a[i]);
        } else {
            odd.push_back(a[i]);
        }
    }
 
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
 
    int e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            a[i] = even[e++];
        } else {
            a[i] = odd[o++];
        }
    }
 
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            return false;
        }
    }
 
    return true;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        if (canSortArray(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
 
    return 0;
}
