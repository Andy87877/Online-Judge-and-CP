#include <bits/stdc++.h>
#define ll unsigned long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    ll arr[n+1];
    arr[0] = 2; arr[1] = 1;
    for (ll i = 2; i < n+1; i++){
        arr[i] = (arr[i-1]+arr[i-2])%1000000007;
    }
    cout << arr[n];
}