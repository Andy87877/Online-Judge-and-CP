// https://zerojudge.tw/ShowProblem?problemid=b964
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n, small = -1, big = 101;
    cin >> n;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 60) {
            if (small < v[i]) {
                small = v[i];
            }
        } else {
            if (big > v[i]) {
                big = v[i];
            }
        }
    }

    sort(v.begin(), v.end());
    for (auto i: v) {
        cout << i << " ";
    }
    cout << "\n";

    if (small == -1) {
        cout << "best case\n";
    } else {
        cout << small << "\n";
    }

    if (big == 101) {
        cout << "worst case\n";
    } else {
        cout << big << "\n";
    }
}