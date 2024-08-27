#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,s = 0;
    while (cin >> n){
        s = 0;
        for (ll i = 1; i <= n-1; i++) {
            if (n%i == 0) s += i;
        }
        if (s > n) cout <<  "盈數\n";
        else if (s < n) cout <<  "虧數\n";
        else cout <<  "完全數\n";
    }
}