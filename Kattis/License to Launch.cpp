// https://open.kattis.com/problems/licensetolaunch
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, mi = 999999999;
    cin >> n;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < mi) mi = arr[i];
    }
    for (ll i = 0; i < n; i++) {
        if (arr[i] == mi) {
            cout  << i << "\n";
            break;
        }
    }
}