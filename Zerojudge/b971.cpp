#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll a,b,c;
    cin >> a >> b >> c;
    while (a != b) {
        cout << a << " ";
        a += c;
    }
    cout << b << "\n";
}