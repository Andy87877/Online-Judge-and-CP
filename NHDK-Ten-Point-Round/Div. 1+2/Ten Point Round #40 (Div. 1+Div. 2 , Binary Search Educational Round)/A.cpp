#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;

    ll a[n], q[m];
    map<ll,ll> ma;

    for (ll i = 0; i < n; i++){
        cin >> a[i];
        ma[a[i]]++;
    }

    for (ll i = 0; i < m; i++){
        cin >> q[i];
        if (ma[q[i]] != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}