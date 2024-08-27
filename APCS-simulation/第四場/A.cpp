#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    ll p[t],n[t];

    ll a=0,b=0; //C
    ll total_a = 0, total_b = 0;

    for (ll i = 0; i < t; i++) {
        cin >> p[i] >> n[i];
        total_a += p[i];
        total_b += n[i];
        if (p[i] > n[i]){
            a++;
        } else if (p[i] < n[i]){
            b++;
        }
    }

    if (a >= b){
        cout << "Positive side\n";
    } else {
        cout << "Negative side\n";
    }

    cout << a << " " << b << "\n";
    cout << total_a << " " << total_b << "\n";
}