#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll a,b;
    cin >> a >> b;
    if (a > b) {
        cout << 0;
    } else {
        cout << b-a+1;
    }
}