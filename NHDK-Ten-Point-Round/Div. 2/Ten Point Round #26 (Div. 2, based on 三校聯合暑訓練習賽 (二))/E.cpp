#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    ll a[n], b[n], c[n], ans[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i]; 
    }

    ll A = 0, B = 0, C = 0;
    for (ll i = 0; i < n/2; i++) {
        ll temp = 0;
        for (ll j = 0; j < n; j++) {
            if (i != j) {
                if (((a[i]+a[j]) == (b[i]+b[j])) && ((a[i]+a[j]) == (c[i]+c[j]))) {
                    temp++;
                }
            }
        }
        ans[i] = temp;
    }

    for (auto i: ans) {
        cout << i << " ";
    }
}