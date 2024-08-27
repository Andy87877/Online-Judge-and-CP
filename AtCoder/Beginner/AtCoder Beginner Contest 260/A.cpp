#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s;
    cin >> s;
    map<char, ll> ma;
    for (auto i: s) {
        ma[i]++;
    }
    if (ma.size() == 1) {
        cout << -1;
    } else if (ma.size() == 3) {
        cout << s[0];
    } else {
        for (auto i: ma) {
            if (i.second == 1) {
                cout << i.first;
            }
        }
    }
    cout << "\n";
}