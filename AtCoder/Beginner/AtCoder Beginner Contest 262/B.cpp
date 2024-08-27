#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;
    ll u[m],v[m];
    map<ll,ll> ma;
    for (ll i = 0; i < m; i++) {
        cin >> u[i] >> v[i];
        ma[v[i]]++;
    }

    ll total = 0;
    for (auto i: ma) {
        total += i.second-1;
    }
    cout << total << endl;
}