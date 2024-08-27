// https://open.kattis.com/problems/reducedidnumbers
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    ll arr[t];
    for (ll i = 0; i < t; i++) {
        cin >> arr[i];
    }

    ll ans = 1;
    while(true){
        bool ok = true;
        map<ll, ll> ma;

        for (ll i = 0; i < t; i++) {
            ma[arr[i]%ans]++;
            // cout << arr[i]%ans << " ";
            if (ma[arr[i]%ans] == 2) {
                ok = false;
                break;
            }
        }
        // cout << "\n";
        if (ok) {
            cout << ans << "\n";
            break;
        }
        ans++;
    }
}