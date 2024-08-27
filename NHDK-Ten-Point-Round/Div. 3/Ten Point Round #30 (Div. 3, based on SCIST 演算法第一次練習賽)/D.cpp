#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s, temps = "";
    cin >> s;
    for (auto i: s) {
        if (i == 'E' || i == 'e') {
            temps += 'e';
        } else if (i == 'Y' || i == 'y') {
            temps += 'y';
        }
    }
    s = temps;
    //cout << s << "\n";
    ll ans = 0, y = 0, ee = 0;
    for (ll i = 0; i < s.size(); i++) {
        if (y == 0) {
            if (s[i] == 'y') {
                y = 1;
            }
        } else if (ee == 0) {
            if (s[i] == 'e') {
                ee = 1;
            }
        } else if (ee == 1) {
            if (s[i] == 'e') {
                ee = 0;
                y = 0;
                ans++;
            }
        }
    }
    
    cout << ans << "\n";
}