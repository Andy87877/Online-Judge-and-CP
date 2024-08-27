#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll solve() {
    ll n;
    cin >> n;
    ll sum = 0;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    bool dp[sum/2+1] = {0};
    dp[0] = 1;
    for (ll i = 0; i < n; i++) {
        for (ll j = (sum/2-1)-arr[i]+1; j >= 0; j--) {
            if (dp[j] == 1) {
                dp[j+arr[i]] = 1;
            }
        }
    }
    // for (ll i = 0; i < sum/2+1; i++) {
    //     cout << dp[i] << " ";
    // }
    // cout <<"\n";
    for (ll i = sum/2; i >= 0; i--) {
        if (dp[i]) {
            return sum-i*2;
        }
    }
    return 0;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}