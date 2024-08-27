#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    ll k[n],p[n],t[n], a,b ,temp;
    map <ll, ll> ma;
    map <ll, ll> time;
    for (ll i = 0; i < n; i++) {
        cin >> k[i] >> p[i] >> t[i];
        temp = k[i]-p[i];
        if (temp <= 1) temp = 1;
        for (ll j = temp; j <= k[i]+p[i]; j++) {
            ma[j] += t[i];
            time[j]++;
        }
    }

    ll mx = -1;
    for (auto i: ma) {
        temp = i.second * time[i.first];
        if (mx < temp) mx = temp;
    }
    cout << mx;
}