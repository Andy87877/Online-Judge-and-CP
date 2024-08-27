#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,q;
    cin >> n >> q;
    ll a[n+1];
    for (ll i = 1; i <= n; i++){
        cin >> a[i];
    }

    ll p,h;
    for (ll tt = 0; tt < q; tt++){
        cin >> p >> h;
        ll total = 0;
        if (p >= 0 && p <= n) {
            total += a[p]*((h/2)+1);
        }

        for (ll i = 0; i < h/2+1; i++){
            if (p+i <= n){
                total += a[p+i]*(h/2+1-i);
            } 
            if (p-i >= 1) {
                total += a[p-i]*(h/2+1-i);
            }
        }
        cout << total << "\n";
    }
}