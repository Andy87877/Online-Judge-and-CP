#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    unordered_map<ll,ll> ma;
    cin >> n >> m;

    ll a, b;
    for (ll i = 0; i < m; i++) {
        cin >> a >> b;
        ma[a]++;
        ma[b]++;
    }

    ll ans = (n-ma.size())*100*n;
    for (auto i: ma) {
        ans += i.second*200+(n-i.second)*100;
    }
    cout << ans << endl;
}