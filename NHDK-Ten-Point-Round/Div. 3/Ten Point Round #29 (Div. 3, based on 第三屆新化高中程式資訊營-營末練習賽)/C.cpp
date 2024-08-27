#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    ll m[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> m[i] >> b[i]; 
    }
    ll ans = 0, x, temp;
    cin >> x;
    for (int i = 0; i < n; i++) {
        temp = x*m[i]+b[i];
        if (temp > ans) ans = temp;
    }
    cout << ans << endl;
}