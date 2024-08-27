// https://zerojudge.tw/ShowProblem?problemid=a522
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

bool solve() {
    ll n,p;
    cin >> n;
    cin >> p;
    ll arr[p];
    bool dp[1001] = {0};
    dp[0] = 1;
    for (ll i = 0; i < p; i++){
        cin >> arr[i];
        for (ll j = n-arr[i]; j >= 0; j--) {
            if (dp[j] == 1) {
                dp[j+arr[i]] = 1;
            }
        }
    }
    return dp[n];
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while(t--) {
        if (solve()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}