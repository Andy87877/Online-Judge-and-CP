#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    map<string, ll> ma;
    string str;
    while(getline(cin, str)) {
        ma[str]++;
        if (ma[str] >= 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}