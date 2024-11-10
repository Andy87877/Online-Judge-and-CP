#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    int money1 = 3 * T;

    int money2 = 299;
    if (T >= 300) {
        money2 += (T - 300) * 3;
    }

    int money3 = 699;
    if (T >= 750) {
        money3 += (T - 750) * 3;
    }

    int ans = min(money1, min(money2, money3));
    cout << ans << "\n";
}