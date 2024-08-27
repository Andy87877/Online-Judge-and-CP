// https://open.kattis.com/problems/soylent
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << n/400+(n%400 != 0) << "\n";
    }
}