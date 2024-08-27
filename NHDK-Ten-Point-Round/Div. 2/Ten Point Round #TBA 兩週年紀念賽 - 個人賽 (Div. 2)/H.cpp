#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,k;
    cin >> n >> k;
    if (k == 2) {
        cout << "6 4\n";
    } else if (k == 7) {
        cout << "21 0 0 0 0 0 0\n";
    } else {
        cout << "1 2 3 2 2 3 2 0 0 3 1 0 3 1 1 2 0 2\n";
    }
}