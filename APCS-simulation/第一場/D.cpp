#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

// 小到大
// 如果後面有想要排到前面就跟最後面的交換

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    ll ans[n+1];
    ll index[n+1];
    for (ll i = 0; i <= n; i++) {
        ans[i] = i; 
        index[i] = i;
    }


    for (ll i = 1; i <= n; i++) {
        ll m;
        cin >> m;
        for (ll j = 0; j < m; j++) {
            ll want;
            cin >> want;

            for (ll k = index[i]; k <= n; k++) {
                if (want == ans[k]) {
                    swap(ans[i], ans[k]);
                    index[i] = k;
                    index[k] = i;
                }
            }
        }
    }

    for (ll i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    }
}