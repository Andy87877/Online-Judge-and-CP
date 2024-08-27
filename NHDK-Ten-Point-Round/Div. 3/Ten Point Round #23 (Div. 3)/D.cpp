#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll n, ans = 0;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i]; 
        ans += a[i]*b[i];
    }
    cout << ans << endl;
}