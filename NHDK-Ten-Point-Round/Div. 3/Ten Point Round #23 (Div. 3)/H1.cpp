#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll n;
    cin >> n;
    ll a[n], su[n+1];
    su[0] = 0;
    cin >> a[0];
    su[1] = a[0];
    for (ll i = 1; i < n; i++) {
        cin >> a[i];
        su[i+1] = su[i] + a[i];
    }

    ll q;
    cin >> q;

    ll l,r;
    for (ll i = 0; i < q; i++) {
        cin >> l >> r;
        cout << su[r]-su[l-1] << "\n";
    }
}