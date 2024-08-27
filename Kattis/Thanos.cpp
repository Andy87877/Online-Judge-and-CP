// https://open.kattis.com/problems/thanos
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,p,r,f, ans;
    cin >> t;
    while (t--) {
        cin >> p >> r >> f;
        ans = 0;
        while (p <= f) {
            p *= r;
            ans++;
        }
        cout << ans << endl;
    }
}