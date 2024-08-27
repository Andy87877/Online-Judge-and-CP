#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string solve() {
    ll n,t;
    cin >> n >> t;
    ll temp = n+n-1+n-2+n-3;

    if (t > temp) {
        return "No";
    }

    if (t < 1+2+3+4) {
        return "No";
    }
    return "Yes";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--) {
        cout << solve() << "\n";
    }
}