// 標準
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
string s1, s2;
ll ans(string s1, string s2) {
    ll dp[s1.size()+1][s2.size()+1];
    memset(dp, 0, sizeof(dp));
    for (ll i = 1; i < s1.size()+1; i++) {
        for (ll j = 1; j < s2.size()+1; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1]+1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // for (ll i = 0; i < s1.size()+1; i++) {
    //     for (ll j = 0; j < s2.size()+1; j++) {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << dp[s1.size()][s2.size()] << "\n";
    return dp[s1.size()][s2.size()];
}

int main() {
    Andy8787_want_AC
    while (cin >> s1 >> s2) {
        cout << ans(s1,s2) << "\n";
    }
}