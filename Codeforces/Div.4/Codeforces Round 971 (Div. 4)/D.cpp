#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll judge(){
    ll n;
    cin >> n;

    ll x[n], y[n];
    
    for (ll i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    ll ans = 0;

    // 用向量 內積 = 0
    for (ll i = 0; i < n; i++){
        for (ll j = i+1; j < n; j++){
            pair<ll,ll> Pair1 = {x[i]-x[j], y[i]-y[j]};
            for (ll k = j+1; k < n; k++){
                pair<ll,ll> Pair2 = {x[i]-x[k], y[i]-y[k]};
                pair<ll,ll> Pair3 = {x[k]-x[j], y[k]-y[j]};

                if (Pair1.first*Pair2.first + Pair1.second*Pair2.second == 0){
                    ans++;
                } else if (Pair1.first*Pair3.first + Pair1.second*Pair3.second == 0){
                    ans++;
                } else if (Pair3.first*Pair2.first + Pair3.second*Pair2.second == 0){
                    ans++;
                }
            }
        }
    }

    return ans;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--){
        cout << judge() << endl;
    }
}