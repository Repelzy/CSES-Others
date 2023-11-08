#include <bits/stdc++.h>
using namespace std;

string isPalin(string s){
    string p = s;
    reverse(p.begin(), p.end());
    if (s == p) {
        return "Yes";
    }
    else {
        return "No";
    }
}

void solve(string &s){
    map<char, int> mp;
    for(auto c : s){
        mp[c]++;
    }
    string begin = "";
    string mid = "";
    for(auto &x : mp){
        if(x.second % 2 == 1){
            if(mid != ""){
                cout << "NO SOLUTION" << endl;
                return;
            }
            mid += x.first;
        }
        begin += string(x.second / 2, x.first);
    }
    string end = begin;
    reverse(end.begin(), end.end());
    string res = begin + mid + end;
    
    if(isPalin(res) == "Yes"){
        cout << res << endl;
    }   
    else{
        cout << "NO SOLUTION" << endl;
    }
}

int main(){
    string s; cin >> s;
    solve(s);
    return 0;
}

