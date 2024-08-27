#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
ll Red(ll num, ll x, ll y);

ll Blue(ll num, ll x, ll y) {
    if (num == 1) {
        return 1;
    } else {
        return Red(num-1, x, y) + y*Blue(num-1, x, y);
    }
}

ll Red(ll num, ll x, ll y){
    if (num == 1) {
        return 0;
    } else {
        return Red(num-1, x, y) + x*Blue(num, x, y);
    }
}

int main() {
    Andy8787_want_AC
    ll n,x,y;
    cin >> n >> x >> y;
    cout << Red(n,x,y); 
}