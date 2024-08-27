#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n, num;
    cin >> n;
    vector<ll> vec;
    map<ll,ll> ma;
    for (ll i = 0; i < n; i++) {
        cin >> num;
        vec.push_back(num);
    }
    sort(vec.begin(), vec.end());

    ll ans = 1;
    for (ll i = 0; i < n; i++) {
        ans *= (vec[i]-i);
        ans %= 1000000007;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cout << solve() << "\n";
}