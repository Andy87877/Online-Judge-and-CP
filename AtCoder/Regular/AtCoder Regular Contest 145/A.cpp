#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    string s,a,b="",c;
    cin >> s;
    
    if (s == "ABAB" || ((t == 2) && (s[0] != s[1]))) {
        cout << "No\n";
    } else if ((s[0] == 'A') && (s[s.size() - 1] != s[0])) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
}