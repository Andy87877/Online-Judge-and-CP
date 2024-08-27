// https://zerojudge.tw/ShowProblem?problemid=a111
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    while(cin >> n) {
        if (n == 0) break;
        ll ans = 0;
        for (ll i = 1; i <= n; i++) {
            ans += pow(i,2);
        }
        cout << ans << "\n";
    }
}


/*
f(1) = 1
f(2) = 4+1 = 2^2 + 1^2
f(3) = 9 + 4 + 1 = 3^2 + f(2)
f(4) = 16 + 9 + 4 + 1 = 4^2 + f(3)
*/