#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;
    
    ll k[n];
    for (ll i = 0; i < n; i++) {
        cin >> k[i];
    }

    ll ans = 0, tmp = 0, back = 0;

    for (ll i = 0; i < n; i++) {
        tmp += k[i];
        // cout << k[i] << " " << tmp << "\n";
        if (tmp == m) {
            // cout << "!!!";
            ans++;
            tmp = 0;
            i = back;
            back = i+1;
        }
        if (tmp > m) {
            tmp = 0;
            i = back;
            back = i+1;
        }

        
    }
    // cout << "\n";
    cout << ans << "\n";
}