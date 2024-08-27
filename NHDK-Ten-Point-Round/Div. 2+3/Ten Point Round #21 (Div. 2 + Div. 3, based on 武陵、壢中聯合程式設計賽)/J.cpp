#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll q;
    cin >> q;
    ll t[q];
    for (int i = 0; i < q; i++) {
        cin >> t[i];
    }

    for (int i = 0; i < q; i++) {
        if ((t[i] == 1000000007) || (t[i] == 998244353)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}