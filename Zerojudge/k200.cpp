#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll a[3], mx = -1111;
    for (ll i = 0; i < 3; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    cout << mx << endl;
}