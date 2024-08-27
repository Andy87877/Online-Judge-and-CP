#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, mx = -1, mi = 99999999, temp;
    cin >> n;
    ll arr[n][2];
    for (ll i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (ll i = 1; i < n; i++) {
        temp = abs(arr[i][0]-arr[i-1][0])+abs(arr[i][1]-arr[i-1][1]);
        mx = max(mx, temp);
        mi = min(mi, temp);
    }
    cout << mx << " " << mi << "\n";
}