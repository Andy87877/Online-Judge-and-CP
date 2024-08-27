#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    int n;
    cin >> n;

    int w[n];
    int now = 0, ans = 0;
    for (int i = 0; i < n; i++){
        now-=18;
        now = max(now,0);
        cin >> w[i];
        ans += max((w[i]-7),0);
        now += max((w[i]-7),0);
        if (w[i] < 8) {
            ans -= (7-w[i]);
            ans = max(ans,0);
        }
    }
    now -= 8;
    now = max(now,0);
    if (now > 0) {
        cout << "IMPOSSIBLE\n";
    } else {
        cout << "YES\n";
        cout << ans << "\n";
    }
}