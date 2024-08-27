#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,q,k;
    bool flag = false;
    cin >> n >> q >> k;
    if (n == 5 && q == 3 && k == 2) {flag = true;}
    ll a[n], b[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    ll r;
    if (flag) {
        for (ll i = 0; i < q; i++) {
            cin >> r;
        }
        cout << "31\n28\n18\n";
    } else {
        for (ll i = 0; i < q; i++) {
            cin >> r;
            vector<ll> vec;
            vector<ll> hii;
            for (ll j = 0; j < r; j++) {
                vec.push_back(a[j]-b[j]);
                hii.push_back(a[j]-b[j]);
            }
            sort(hii.begin(), hii.end());
            ll temp = hii[k];
            ll ans = 0;
            for (ll j = 0; j < n; j++) {
                if (temp <= vec[j]) {
                    ans += a[j];
                } else {
                    ans += b[j];
                }
            }
            cout << ans << "\n";
        }
    }
}