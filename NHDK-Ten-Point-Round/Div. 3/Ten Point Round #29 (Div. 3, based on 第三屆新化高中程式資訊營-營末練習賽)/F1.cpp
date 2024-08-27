#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n, m;
    map <ll,ll> ma; // a-->b
    cin >> n >> m;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        ma[i+1] = v[i];
    }

    ll now = 1;
    for (ll i = 0; i < m-1; i++) {
        now = ma[now];
        // cout << now << " ";
    }
    cout << now << "\n";
}