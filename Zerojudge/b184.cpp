#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll k;


    while(cin >> k){
        ll v[101], c[101];
        for (ll i = 0; i < k; i++) {
            cin >> v[i] >> c[i];
        }
        ll dp[101] = {0};
        for (ll i = 0; i < k; i++) {
            for (ll j = 100; j-v[i] >= 0; j--) {
                if (dp[j] < dp[j-v[i]] + c[i]) {
                    dp[j] = dp[j-v[i]] + c[i];
                }
            }
        }
        cout << dp[100] << "\n";
    }
}