#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll judge(){
    ll n,x;
    cin >> n >> x;

    ll num;
    map<ll, ll> ma;

    for (ll i = 0; i < n; i++){
        cin >> num;
        ma[num]++;
    }

    if (ma[x] == 0) return 0;
    if (ma.size() == 1) return 2;
    return 1;
}

int main() {
    Andy8787_want_AC
    cout << judge() << "\n";
}