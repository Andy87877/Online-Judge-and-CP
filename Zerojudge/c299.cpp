#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &i: a) {
        cin >> i;
    }
    sort(a.begin(), a.end());
    cout << a[0] << " " << a[n-1];

    bool flag = true;
    for (ll i = 0; i < n-1; i++) {
        if (a[i]+1 != a[i+1]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << " yes\n";
    } else {
        cout << " no\n";
    }
}