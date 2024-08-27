#include <bits/stdc++.h>
using namespace std;

int main() {
    int d;
    string s;
    cin >> d;
    cin >> s;
    for (auto i: s) {
        int n = int(i)-d;
        if (n <= 64) {
            n += 26;
        }
        cout << char(n);
    }
    cout << "\n";
}