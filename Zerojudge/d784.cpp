#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n, mx = -10000, temp;
    cin >> n;
    ll a[n], sum[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (mx < a[i]) mx = a[i];
    }

    sum[0] = a[0];
    for (ll i = 1; i < n; i++) {
        sum[i] = a[i] + sum[i - 1];
    }

    for (ll i = 0; i < n; i++) {
        for (ll j = i+1; j < n; j++) {
            temp = sum[j]-sum[i]+a[i];
            if (mx < temp) mx = temp;
        }
    }
    return mx;
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}