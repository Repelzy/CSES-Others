#include <iostream>
#include <string>
using namespace std;

int main() {
    string phone;

    cin >> phone;
        string res;

        if (phone[0] == '0') {
            phone.erase(0, 1);
        }

        if (phone.length() > 11) {
            phone = phone.substr(0, 11);
        }

        string prefix = phone.substr(0, 3);

        if (prefix == "169") {
            res = "39" + phone.substr(3);
        } else if (prefix == "168") {
            res = "38" + phone.substr(3);
        } else if (prefix == "167") {
            res = "37" + phone.substr(3);
        } else if (prefix == "166") {
            res = "36" + phone.substr(3);
        } else if (prefix == "165") {
            res = "35" + phone.substr(3);
        } else if (prefix == "164") {
            res = "34" + phone.substr(3);
        } else if (prefix == "163") {
            res = "33" + phone.substr(3);
        } else if (prefix == "162") {
            res = "32" + phone.substr(3);
        } else if (prefix == "161" || prefix == "160") {
            res = "Khac nha mang!";
        } else {
            res = "Khac nha mang";
        }
        if (phone.length() == 10){
        	res = phone;
		}
        cout << res << endl;
    return 0;
}

