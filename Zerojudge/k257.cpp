#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s;
    cin >> s;

    string ans = "";
    ans += s[0];
    for (ll i = 0; i < 4-s.size(); i++){
        ans += '0';
    }
    for (ll i = 1; i < s.size(); i++){
        ans += s[i];
    }

    cout << ans << endl;
}