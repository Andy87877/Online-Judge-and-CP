#include <bits/stdc++.h>
#define ll long long
using namespace std;

string solve() {
    ll n,x;
    cin >> n >> x;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll total = 0;
    for (ll i = 0; i < n; i++) {
        if (i%2) total--;
        total += a[i];
    }
    if (total > x) {
        return "No";
    } else {
        return "Yes";
    }
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cout << solve() << endl;
}