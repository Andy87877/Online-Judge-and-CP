#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll n, m;
    cin >> n >> m;
    ll a[n][m], su[n+2][m+2];
    for (ll i = 0; i <= n+1; i++) {
        for (ll j = 0; j <= m+1; j++) {
            su[i][j] = 0;
        }
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            cin >> a[i][j];
            su[i+1][j+1] = a[i][j]+su[i][j+1] + su[i+1][j]-su[i][j];
        }
    }

    // for (ll i = 1; i <= n; i++) {
    //     for (ll j = 1; j <= m; j++) {
    //         cout << su[i][j] << " ";
    //     }
    //     cout << "\n";
    // }
    ll q, x1, x2, y1, y2, ans;
    cin >> q;
    for (ll i = 0; i < q; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        ans = su[x2+1][y2+1]-su[x1][y2+1]-su[x2+1][y1]+su[x1][y1];
        cout << ans << "\n";
    }
}