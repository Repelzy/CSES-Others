#include <bits/stdc++.h>
using namespace std;

long long int findMin(long long int a[], long long int l, long long int r) {
    long long int minVal = a[l];
    for (long long int i = l + 1; i <= r; i++) {
        if (a[i] < minVal)
            minVal = a[i];
    }
    return minVal;
}

int main() {
    long long int n, q;
    cin >> n >> q;
    cin.ignore();
    long long int arr[n + 1];
    for (long long int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    while (q--) {
        long long int l, r;
        cin >> l >> r;
        long long int minimum = arr[l]; 
        for (long long int i = l + 1; i <= r; i++) {
            if (arr[i] < minimum)
                minimum = arr[i];
        }
        cout << minimum << endl;
    }

    return 0;
}

