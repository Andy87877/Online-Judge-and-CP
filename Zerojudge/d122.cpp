#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    while (cin >> n) {
        ll total = 0;
        while (n > 0) {
            total += n/5;
            n/=5;
        }
        cout << total << "\n";
    }
}