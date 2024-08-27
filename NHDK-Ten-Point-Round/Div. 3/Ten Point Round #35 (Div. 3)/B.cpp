#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    cout << n/2;
    if (n % 2 == 0) {
        cout << ".0";
    } else {
        cout << ".5";
    }
}