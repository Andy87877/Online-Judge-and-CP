#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    ll a[n], b[n];

    for (ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
        if (b[i]%2) {
            ans ^= a[i];
        }
    }
    cout << ans << endl;
}