#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n, temp;
    vector<ll> vec;
    cin >> n;
    for (ll i = 0; i < 4; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    for (ll i = 4; i < n; i++) {
        vec.push_back(vec[i-4]+vec[i-1]);
    }
    sort(vec.begin(), vec.end());

    return vec[vec.size()/2];
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}