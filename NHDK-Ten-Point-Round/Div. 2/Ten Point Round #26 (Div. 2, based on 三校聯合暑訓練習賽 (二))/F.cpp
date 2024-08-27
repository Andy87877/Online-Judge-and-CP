#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,q;
    cin >> n >> q;
    ll a[n];
    map<ll,map<ll,ll>> ma; // 第幾個 前面一個數字 次數
    map<ll,ll> tmp;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        tmp = ma[i-1];
        ma[i] = tmp;
        ma[i][a[i]]++;
    }

    for (ll i = 0; i < q; i++) {
        ll l,r,k, ans = 0;
        cin >> l >> r >> k;
        ans = ma[r-1][k]-ma[l-2][k];
        cout << ans << "\n";
    }
}