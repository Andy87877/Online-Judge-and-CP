#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s;
    while (getline(cin, s)) {
        bool NO = true;
        for (auto i: s) {
            if (i == '!') {
                cout << "YES\n";
                NO = false;
                break;
            }
        }
        if (NO) cout << "NO\n";
    }
}