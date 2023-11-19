//// time : O(nlogn) TLE for big number
//#include <bitset>
//#include <iostream>
//using namespace std;
//
//int count_1_bits(int n) {
//    int count = 0;
//    for(int i = 1; i <= n; i++){
//    	int x = i;
//    	while(x){
//    		count += x&1;
//    		x = x>>1;
//		}
//	}
//    return count;
//}
//
//int main() {
//    int n;
//    cin >> n;
//    cout << count_1_bits(n) << endl;
//    return 0;
//}

// Time: O(n)
#include <iostream>
using namespace std;

const int MAXN = 1e5;  
int result[MAXN + 1];

void countBits(int num) {
    for (int i = 1; i <= num; ++i)
        result[i] = result[i & (i - 1)] + 1;
}

int main() {
    int n;
    cin >> n;
    countBits(n);
    int total = 0;
    for (int i = 1; i <= n; ++i)
        total += result[i];
    cout << total << endl;
    return 0;
}

