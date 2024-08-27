#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s;
    getline(cin, s);
    for (ll i = 0; i < s.length(); i++) {
        if (int(s[i]) == 20837) {
            s[i] = char(20986);
        }
    }
    cout << s << endl;
}