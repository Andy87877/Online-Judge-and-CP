#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    
    ll x[n], y[n];
    ll total_x = 0, total_y = 0;
    for (ll i = 0; i < n; i++){
        cin >> x[i] >> y[i];
        total_x += x[i];
        total_y += y[i];
    }

    long double X = double(total_x)/double(n);
    long double Y = double(total_y)/double(n);

    long double ans = 0;

    for (ll i = 0; i < n; i++){
        ans += (abs(X-x[i]));
        ans += (abs(Y-y[i]));
    }

    cout << ans << "\n";
}