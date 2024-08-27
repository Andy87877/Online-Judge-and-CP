#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll x,y,z, mn = 9999999999, temp = 0;
    vector <ll> a;
    for (ll i = 0; i < 3; i++) {
        cin >> x;
        a.push_back(x);
    }
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < 3; j++) {
            for (ll k = 0; k < 3; k++) {
                if (i != j && j != k && i != k) {
                    temp = (a[i] ^ (a[j] | a[k])) ^ (a[i]+a[j]);
                    if (temp < mn) mn = temp;
                }
            }
        }
    }
    cout << mn << "\n";
}