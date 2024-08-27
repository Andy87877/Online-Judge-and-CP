// https://zerojudge.tw/ShowProblem?problemid=c547
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    while(cin >> n) {       
        ll arr[n+2];
        arr[1] = 1;
        arr[2] = 2;
        for (ll i = 3; i <= n; i++) {
            arr[i] = (arr[i-1] + arr[i-2])%1000000007;
        }
        cout << arr[n] << "\n";
    }
}