#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[46];
int main() {
    dp[1] = 1;
    dp[2] = 2;
    for (ll i = 3; i <= 45; i++) {
        dp[i] = dp[i-2]+dp[i-1];
    }

    ll n;
    while (cin >> n) {
        cout << dp[n] << endl;
    }
}