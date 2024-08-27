#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll x,y;
    cin >> x >> y;
    x--;

    ll ans;
    ans = (y*(y+1))/2 - (x*(x+1))/2;
    cout << ans << endl;
}