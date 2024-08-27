#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    ll temp = 0, mx = 0;
    for (ll i = 0; i < n-1; i++) {
        if (a[i]%2 == a[i+1]%2) {
            temp++;
        } else {
            temp = 0;
        }
        if (mx < temp) mx = temp;
    }

    for (ll j = 0; j < mx; j++) {
        for (ll i = 0; i < n-1; i++) {
            if (a[i]%2 == a[i+1]%2) {
                if (a[i] > a[i+1]) {
                    swap(a[i], a[i+1]);
                }
            }
        }
    }
    

    for (auto i: a) {
        cout << i;
    }
}