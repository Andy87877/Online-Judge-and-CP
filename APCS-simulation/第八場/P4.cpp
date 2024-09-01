#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll ans = 0;
    for (ll i = 0; i < n-1; i++){
        ll now_mx = arr[i+1];
        ans++;
        for (ll j = i+2; j < n; j++){
            // cout << i+1 << " " << j+1 << " " << now_mx;
            if (arr[j] > now_mx){
                // cout << "add";
                ans++;
                now_mx = arr[j];
            } else if (arr[i] > now_mx){
                // cout << "add";
                ans++;
            }
            // cout << endl;
        }
    }
    cout << ans << "\n";
}