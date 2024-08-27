#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<ll> odd;
    vector<ll> even;

    for (auto &i: a) {
        cin >> i;
        if (i%2) {
            odd.push_back(i);
        } else {
            even.push_back(i);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.rbegin(), odd.rend());
    for (auto &i: even) {
        cout << i << " ";
    }
    for (auto &i: odd) {
        cout << i << " ";
    }
    cout << "\n";
}