#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll sovle() {
    ll n,m,x,t,d;
    ll ans;
    cin >> n >> m >> x >> t >> d;
    ans = t-(n-m)*d+(n-x)*d;
    if (ans > t) return t;
    return ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cout << sovle() << "\n";
}
/*
n is t
d add
m goal
x ~ n dont add
*/