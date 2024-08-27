#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n, t = 1;
    while (cin >> n){
        ll a[n];
        map<ll,ll> ma;

        bool flag = false;
        cin >> a[0];
        for (ll i = 1; i < n; i++){
            cin >> a[i];
            if (a[i-1] >= a[i]){
                flag = true;
            }
        }

        cout << "Case #" << t << ": ";
        if (flag){
            cout << "It is not a B2-Sequence.";
        } else  {
            for (ll i = 0; i < n; i++){
                for (ll j = i; j < n; j++){
                    ma[a[i]+a[j]]++;
                    if (ma[a[i]+a[j]] == 2){
                        flag = true;
                        break;
                    }
                }
                if (flag) break;
            }

            if (flag){
                cout << "It is not a B2-Sequence.";
            } else {
                cout << "It is a B2-Sequence.";
            }
        }
        t++;
        cout << "\n";
    }
}