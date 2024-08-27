#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c;
    cin >> a;
    while (a--) {
        cin >> b >> c;
        if (b > c) {
            cout << ">\n";
        } else if (b < c) {
            cout << "<\n";
        } else {
            cout << "=\n";
        }
    }
}