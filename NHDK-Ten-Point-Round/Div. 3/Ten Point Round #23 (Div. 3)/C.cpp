#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll k, ans = 0;
    cin >> k;
    if (k >= 21) {
        ans += (k-20)*300;
        k = 20;
    }
    if (k >= 11) {
        ans += (k-10)*200;
        k = 10;
    }
    ans += k*100;
    cout << ans << endl;
}