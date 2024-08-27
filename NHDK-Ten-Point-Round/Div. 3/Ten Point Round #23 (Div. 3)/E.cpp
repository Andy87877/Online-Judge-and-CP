#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll n;
    cin >> n;
    ll a[n];

    map<ll,ll> ma;
    vector<ll> ans; 

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        ma[a[i]]++;
    }

    ll times = 0, times2 = 0;
    for (auto i: ma) {
        if (i.second >= 15) {
            times++;
        }
        if (i.second >= 10) {
            times2++;
        }
    }
    cout << times2 << " " << times << "\n";
}