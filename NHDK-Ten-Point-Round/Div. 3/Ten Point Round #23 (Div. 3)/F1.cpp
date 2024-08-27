#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);

    ll n, num;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    for (auto i: a) {
        cout << i;
    }
}