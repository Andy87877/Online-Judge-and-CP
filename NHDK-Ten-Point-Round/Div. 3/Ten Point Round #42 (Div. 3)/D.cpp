#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    vector<ll> vec(n);
    ll total = 0;
    for (ll i = 0; i < n; i++){
        cin >> vec[i];
        total += vec[i];
    }

    sort(vec.rbegin(), vec.rend());

    ll x = 0;
    for (ll i = 0; i < n; i++){
        x += vec[i];
        // cout << 2*x << " " << total << endl;
        if (2*x > total){
            cout << i;
            break;
        }
    }
}