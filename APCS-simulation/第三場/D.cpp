#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m, sum = 0;
    cin >> n >> m;

    vector<ll> v(m);
    for (ll i = 0; i < m; i++){
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());

    ll mx_num = 0;
    for (ll liq = 1; liq <= n; liq++) {

        for (ll i = mx_num; i < m; i++) {
            if (v[i] < liq)
        }
    }
}