// https://open.kattis.com/problems/sifferprodukt
#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    while (x >= 10) {
        string str = to_string(x);
        x = 1;
        for (auto i: str) {
            if (int(i-'0') != 0) {
                x *= int(i-'0');
            }
        }
    }
    cout << x << endl;
}