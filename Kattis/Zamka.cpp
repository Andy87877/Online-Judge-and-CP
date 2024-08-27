// https://open.kattis.com/problems/zamka
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ll l,d,x;
    cin >> l >> d >> x;
    for (int i = l; i <= d; i++) {
        string str = to_string(i);
        ll temp = 0;
        for (auto i: str) {
            temp += int(i)-48;
        }
        if (temp == x) {
            cout << i << "\n";
            break;
        }
    }
    for (int i = d; i >= l; i--) {
        string str = to_string(i);
        ll temp = 0;
        for (auto i: str) {
            temp += int(i)-48;
        }
        if (temp == x) {
            cout << i << "\n";
            break;
        }
    }
}