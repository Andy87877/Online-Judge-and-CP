#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll a, h = 0, m = 0, s = 0;
    cin >> a;
    h = a/3600;
    m = (a-3600*h)/60;
    s = (a-3600*h-60*m);
    cout << h << "\n";
    cout << m << "\n";
    cout << s << "\n";
}