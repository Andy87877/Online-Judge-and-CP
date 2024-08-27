#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

string judge(){
    ll n;
    cin >> n;

    ll L_max = -1, R_min = 9999999999999;

    vector<ll> l(n), r(n);
    for (ll i = 0; i < n; i++){
        cin >> l[i] >> r[i];
        L_max = max(L_max, l[i]);
        R_min = min(R_min, r[i]);
    }

    if (L_max > R_min) return "NO";


    return "YES";
}

int main() {
    Andy8787_want_AC
    cout << judge() << "\n";
}