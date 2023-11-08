#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int q;
    cin >> q;
    ll k;
    vector<ll> power(19, 1);
    for (int i = 1; i < 19; i++) {
        power[i] = power[i - 1] * 10;
    }
    while (q--) {
        cin >> k;
        ll digitLength = 0; 
        ll numDigits = 0;
        ll prevDigits = 0; 
        for (int i = 1; i < 19; i++) {
            digitLength += (power[i] - power[i - 1]) * i;
            if (digitLength >= k) {
                numDigits = i;
                break;
            }
            prevDigits = digitLength;
        }
        ll low = power[numDigits - 1];
        ll high = power[numDigits] - 1; 
        ll ans = 0;
        ll startPos = 0;
        while (low <= high) {
            ll mid = (low + high) / 2; 
            ll startposBlock = (mid - power[numDigits - 1]) * numDigits + prevDigits + 1; // Corrected variable name
            if (startposBlock <= k) {
                if (mid > ans) {
                    ans = mid;
                    startPos = startposBlock;
                }
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        string number = to_string(ans);
        cout << number[k - startPos] << endl;
    }
    return 0;
}

