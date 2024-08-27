#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s;
    cin >> s;

    string tmp = "";
    ll numtmp = 0;
    ll times = 0;

    for (ll i = 8; i < s.size(); i++) {
        char st = s[i];
        if (int(st) <= int('9') && int('0') <= int(st)) {
            numtmp++;
            tmp += st;
        } else {
            bool flag = true;
            for (ll j = 0; j < tmp.size(); j++) {
                char st = tmp[j];
                if (st == '0' && flag) {
                } else {
                    flag = false;
                    cout << st;
                }
            }
            cout << " ";
            times++;
            tmp = "";
            numtmp = 0;
            if (times == 1) {
                i += 11;
            } else if (times == 2) {
                i += 5;
            } else {
                break;
            }
        }
    }
}