#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n, q;
    cin >> n >> q;

    ll arr[n+2];
    for (ll i = 1; i <= n; i++){
        cin >> arr[i];
    }

    while (q--){
        map<ll,ll> ma;
        bool flag = true;

        ll L,R;
        cin >> L >> R;

        for (ll i = L; i <= R; i++){
            ma[arr[i]]++;
        }

        for (ll i = 1; i < n+10; i++){
            // cout << i << " " << ma[i] << "\n";
            if (ma[i] == 0){
                cout << i << "\n";
                flag = false;
                break;
            }
        }

        if (flag) cout << n+1 << "\n";
    }
}