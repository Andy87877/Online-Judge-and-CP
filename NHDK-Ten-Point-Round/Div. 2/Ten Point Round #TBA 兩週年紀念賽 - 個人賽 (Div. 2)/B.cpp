#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    if (n < 60) {
        cout << "slow\n";
    } else if (n <= 100) {
        cout << "standard\n";
    } else {
        cout << "fast\n";
    }
}