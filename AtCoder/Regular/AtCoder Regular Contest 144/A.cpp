#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;


void solve(ll N) {
    ll total = 0;
    while (N >= 5) {
        total++;
        N -= 4;
    }
    if (N != 0) {
        cout << N;
    }
    for (ll i = 0; i < total; i++) {
        cout << 4;
    }
}

int main() {
    Andy8787_want_AC
    ll N;
    cin >> N;
    cout << 2*N << "\n";
    solve(N);
}
