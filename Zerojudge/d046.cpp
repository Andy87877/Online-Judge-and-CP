#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n, total = 0;
    cin >> n;
    for (ll i = 0; i < n; i++){
        ll a;
        cin >> a;
        if (a <= 10) total++;
    }
    cout << total << endl;
}