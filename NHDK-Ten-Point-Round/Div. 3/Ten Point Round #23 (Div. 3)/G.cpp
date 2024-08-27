#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n,c,t,k1,k2,k3;
    cin >> n >> c >> t >> k1 >> k2 >> k3;

    ll tempn, temp = 0, mx = 0;
    for (ll i = 0; i <= t; i++) {// k1
        for (ll j = 0; j <= t-i; j++) {// k2
            tempn = k1*i+k2*j+n;
            for (ll k = 0; k < t; k++) {// k3
                // cout << tempn << " ";
                if (tempn == c) {
                    return c;
                } else if (tempn < c) {
                    temp = tempn;
                    break;
                }
                tempn -= k3;
            }
            if (temp > mx) mx = temp;
        }
    }
    return mx;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cout << solve() << "\n";
}