#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    long long n, k, ans;
    cin >> n >> k;
    long long d[n];
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    ans = d[0]*k;
    cout << ans << " ";
    for (long long i = 1; i < n; i++) {
        ans = 0;
        for (long long j = i; j >= 0; j--) {
            if ((k+j-i) <= 0) {
                break;
            } else {
                ans += (k+j-i)*d[j];
            }
        }
        cout << ans << " ";
    }
}