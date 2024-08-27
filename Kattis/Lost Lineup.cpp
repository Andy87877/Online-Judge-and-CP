// https://open.kattis.com/problems/lostlineup
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll num, ans[n];
    ans[0] = 1;
    for (ll i = 1; i <= n-1; i++) {
        cin >> num;
        ans[num+1] = i+1;
    }
    
    for (ll i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
}   