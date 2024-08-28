#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n, ans = 0;
    cin >> n;
    ll A[n], B;
    for (ll i = 0; i < n; i++){
        cin >> A[i];
    }
    for (ll i = 0; i < n; i++){
        cin >> B;
        ans += (A[i]*B);
    }

    cout << ans << "\n";

}