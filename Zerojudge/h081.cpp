// https://zerojudge.tw/ShowProblem?problemid=h081
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n,d, x, ans = 0;
    bool have_pay = true;
    cin >> n >> d;
    ll a[n];

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    x = a[0];
    
    for (ll i = 1; i < n; i++) {
        if (have_pay) {
            if (a[i] >= x+d) {
                ans += a[i]-x;
                have_pay = false;
                x = a[i];
            }
        } else {
            if (a[i] <= x-d) {
                have_pay = true;
                x = a[i];
            }
        }
    }    

    cout << ans << "\n";
}
