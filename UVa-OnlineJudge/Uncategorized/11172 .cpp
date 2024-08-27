#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,a,b;
    cin  >> t;
    while (t--) {
        cin >> a >> b;
        if (a < b) {
            cout << "<\n";
        } else if (a > b) {
            cout << ">\n";
        } else {
            cout << "=\n";
        }
    }
}