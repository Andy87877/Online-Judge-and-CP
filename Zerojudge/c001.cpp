// 自己想的
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string s1,s2;
    // cin >> s1 >> s2;
    while (cin >> s1 >> s2) {
        if (s1.size() > s2.size()) swap(s1,s2);

        ll dp[s1.size()] = {0} ,mx, ans = 0;
        map<ll , ll> same;
        for (ll i = 0; i < s2.size(); i++) {
            mx = dp[0];
            ll temp = 0;
            for (ll j = 0; j < s1.size(); j++) {
                if ((s1[j] == s2[i])) {
                    if (same[s1[j]] > temp) {
                        temp++;
                    } else {
                        same[s1[j]]++;
                        dp[j] = max(dp[j], mx+1);
                        ans = max(dp[j], max(mx, ans));
                        break;
                    }
                }
                mx = max(dp[j], mx);
            }
            // for (ll j = 0; j < s1.size(); j++) {
            //     cout << dp[j] << " ";
            // }
            // cout << "\n";
        }
        cout << ans << "\n";
    }
}