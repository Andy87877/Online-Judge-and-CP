// https://open.kattis.com/problems/lastfactorialdigit
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >> t;
    while (t--) {
        cin >> n;
        if (n >= 5) {
            cout << "0\n";
        } else {
            int temp = 1;
            for (int i = 2; i <= n; i++) {
                temp *= i;
            }
            cout << temp%10 << "\n";
        }
    }
}