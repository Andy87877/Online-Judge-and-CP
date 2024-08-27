#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;
    ll a[n];
    for (ll i = 0; i < n; i++){
        cin >> a[i];
    }

    ll k, ans = n*m;
    cin >> k;
    for (ll i = 0; i < k; i++){
        ll L,R,P;
        cin >> L >> R >> P;
        for (ll j = 0; j < n; j++){
            if (L <= a[j] && R >= a[j]){
                ans += P;
                ans -= m;
            }
        }
    }

    cout << ans << "\n";
}