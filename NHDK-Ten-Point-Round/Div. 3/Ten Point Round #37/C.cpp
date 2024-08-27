#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

// 0分WTF
int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    double x[n], y[n];
    for (ll i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    double ans = 0;
    for (ll i = 0; i < n-1; i++) {
        ans += x[i]*y[i+1];
        ans -= y[i]*x[i+1];
    }
    ans += x[n-1]*y[0];
    ans -= y[n-1]*x[0];
    double a = (ans)/2;
    cout << abs(a);
}