#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;
    ll arr[n];
    for (ll i = 0; i < n; i++) {
        arr[i] = i+1;
    }

    while(!((arr[0] == m-n+1) && (arr[n-1] == m))){
        for(ll i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        if (arr[n-1] == m) {
            for (ll i = n-2; i >= 0; i--) {
                if ((arr[i+1]-arr[i]) != 1) {
                    arr[i]++;
                    for (ll j = i+1; j < n; j++) {
                        arr[j] = arr[j-1]+1;
                    }
                    break;
                }
            }
        } else {
            arr[n-1]++;
        }
    }
    for(ll i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}