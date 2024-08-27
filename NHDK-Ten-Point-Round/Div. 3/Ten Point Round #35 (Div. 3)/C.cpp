#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,k;
    cin >> n >> k;
    ll a[n];
    bool flag = true;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++) {
        k -= a[i];
        if (k <= 0){
            cout << i << "\n";
            flag = false;
            break;
        }
    }
    if (flag) cout << n << "\n";
}
