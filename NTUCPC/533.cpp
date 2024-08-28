#include <bits/stdc++.h>
#define ll unsigned long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    
    vector<ll> vec(n);
    for (ll i = 0; i < n; i++){
        cin >> vec[i];
    }
    sort(vec.rbegin(), vec.rend());

    cout << vec[1];
}