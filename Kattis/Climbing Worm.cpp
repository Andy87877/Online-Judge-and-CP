// https://open.kattis.com/problems/climbingworm
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,h, ans = 0, now = 0;
    cin >> a >> b >> h;
    while (1) {
        now += a;
        ans++;
        if (now >= h) break;
        now -= b;
    }
    cout << ans << "\n";
}