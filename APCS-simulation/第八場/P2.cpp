#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    ll step[n*n-1];
    for (ll i = 0; i < n*n-1; i++){
        cin >> step[i];
    }

    // normal ,right:90 , 180, 270
    ll arr1[n][n], arr2[n][n], arr3[n][n], arr4[n][n];

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            cin >> arr1[i][j];
        }
    }

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            arr2[i][j] = arr1[n-j-1][i];
        }
    }

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            arr3[i][j] = arr2[n-j-1][i];
        }
    }

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < n; j++){
            arr4[i][j] = arr3[n-j-1][i];
        }
    }


    // judge
    ll now = 1, ans = arr1[0][0];
    for (ll i = 1; i < n*n; i++){
        ll x = i/n, y = i%n;
        if (step[i-1] == 1){
            now++;
            if (now == 5) now = 1;
        } else {
            now--;
            if (now == 0) now = 4;
        }

        if (now == 1){
            ans += arr1[x][y];
        } else if (now == 2) {
            ans += arr2[x][y];
        } else if (now == 3) {
            ans += arr3[x][y];
        } else if (now == 4) {
            ans += arr4[x][y];
        }
    }

    cout << ans << "\n";
}