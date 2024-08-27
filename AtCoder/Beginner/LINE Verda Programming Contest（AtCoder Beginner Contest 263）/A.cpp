#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    map<ll,ll> ma;
    ll n;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        ma[n]++;
    }
    if (ma.size() == 2) {
        if (ma[n] == 2 || ma[n] == 3) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    } else {
        cout << "No\n";
    }
} 