#include <bits/stdc++.h>
#include <string>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void solve() {
    ll n,m;
    cin >> n >> m;
    bool arr[n+1];
    memset(arr, false, n+1);

    string cin_s, s;
    cin.ignore();
    for (ll i = 0; i < m; i++) {
        getline(cin, cin_s);
        // cout << cin_s << endl;
        s += cin_s;
        s += " ";
    }
    string tmp = "";

    for (ll j = 0; j < s.size(); j++) {
        if (int('0') <= int(s[j]) && int(s[j]) <= int('9')) {
            tmp += s[j];
        } else {
            ll number = 0;
            for (ll k= 0; k < tmp.size(); k++) {
                number *= 10;
                number += int(tmp[k])-48;
            }
            arr[number] = true;
            tmp = "";
        }
    }


    for (ll i = 1; i <= n; i++) {
        if (arr[i] == false) {
            cout << i << " ";
        }
    }

    cout << "\n";
}

int main() {
    Andy8787_want_AC
    ll times;
    cin >> times;
    for (ll tiitititi = 0; tiitititi < times; tiitititi++) {
        solve();
    }
}