#include <bits/stdc++.h>
using namespace std;

struct range {
    int l, r, index;
    bool operator <(const range o) const {
        if (l == o.l) {
            return r > o.r;
        }
        return l < o.l;  
    }
};

int main() {
    int n;
    cin >> n;
    vector<bool> contain(n);
    vector<bool> containINO(n);
    vector<range> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].l;
        cin >> a[i].r;
        a[i].index = i;
    }
    sort(a.begin(), a.end());

    int maxE = 0;
    for (int i = 0; i < n; i++) {
        if (a[i].r <= maxE) {
            contain[a[i].index] = true;  
        }
        maxE = max(maxE, a[i].r);
    }

    int minE = 1e9 + 1;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i].r >= minE) {
            containINO[a[i].index] = true;
        }
        minE = min(minE, a[i].r);
    }

    for (int i = 0; i < n; i++) {
        cout << containINO[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << contain[i] << " ";
    }
    cout << endl;

    return 0;
}
