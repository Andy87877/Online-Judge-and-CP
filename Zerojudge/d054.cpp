// https://zerojudge.tw/ShowProblem?problemid=d054
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve() {
    ll n, a[42];
    cin >> n;
    a[0] = 0;
    a[1] = 1;
    a[2] = 5;
    a[3] = 11;
    a[4] = 33;
    
    for (ll i = 5; i <= n; i++) {
        a[i] = a[i-1]+4*a[i-2]+2*a[i-3];
    }
    return a[n];
}


int main() {
    ll t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
}