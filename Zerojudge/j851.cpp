#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

// 往右和下

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;
    string arr[n];
    
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++) {
            if (arr[i][j] == '#') {
                // 往右
                for (ll k = j+1; k < m; k++) {
                    if (arr[i][k] == '#') {
                        ans++;
                        break;
                    }
                }
                // 往下
                for (ll k = i+1; k < n; k++) {
                    if (arr[k][j] == '#') {
                        ans++;
                        break;
                    }
                }
            }
        }
    }
    cout << ans << "\n";
}