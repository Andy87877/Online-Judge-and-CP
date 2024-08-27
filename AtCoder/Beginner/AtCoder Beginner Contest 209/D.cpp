#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    ll n,q,a,b;
    cin >> n >> q;
    map<ll,vector<ll>> ma;
    for (ll i = 0; i < n-1; i++) {
        cin >> a >> b;
        ma[a].push_back(b);
        ma[b].push_back(a);
    }
    for (ll i = 0; i < q; i++) {
        cin >> a >> b;
        vector<ll> temp = ma[a];
        bool flag = true;
        for (ll j: temp) {
            if (j == b) {
                cout << "Road\n";
                flag = false;
            }
        }
        if (flag) {
            cout << "Town\n";
        }
    }
}