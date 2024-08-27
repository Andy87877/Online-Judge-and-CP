// https://open.kattis.com/problems/stopwatch
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n1, n2, t, ans = 0;
    cin >> t;
    if (t%2) {
        cout << "still running\n";
    } else {
        t += 2;
        while (t -= 2) {
            cin >> n1;
            cin >> n2;
            ans += n2-n1;
        }
        cout << ans << endl;
    }
}