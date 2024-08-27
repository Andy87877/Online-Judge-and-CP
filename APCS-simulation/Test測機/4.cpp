#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    ll a = 1,b = 1, ans = 0;
    for (ll i = 0; i < n-2; i++) {
        ans = a+b;
        a = b;
        b = ans;
    }
    cout << ans << endl;
}