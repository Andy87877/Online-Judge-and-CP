#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll c1, c2, v1, v2;
    cin >> c1 >> c2 >> v1 >> v2;

    if (c1*v1*2 == c2*v2*5) {
        cout << "Yes\n";
        cout << c1*v1*2;
    } else {
        cout << "No";
    }
}