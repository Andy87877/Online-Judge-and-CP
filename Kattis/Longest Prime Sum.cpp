// https://open.kattis.com/problems/longestprimesum
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    Andy8787_want_AC
    ll n;
    map<ll,ll> ma;

    for (ll i = 0; i < 10; i++){
        cin >> n;
        ma[n%42]++;
    }

    cout << ma.size();
}