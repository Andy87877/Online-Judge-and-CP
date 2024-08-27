#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

vector<ll> arr[151]; // a
pair<ll,ll> times[151]; // time

int main() {
    Andy8787_want_AC
    ll n, q;
    cin >> n >> q;
    

    vector<ll> now;
    ll number;

    for (ll i = 0; i < 11; i++){
        cin >> number;
        now.push_back(number);
    }
    arr[0] = {now};
    times[0] = {0,0};


    for (ll tttt = 0; tttt < n; tttt++){
        ll M,S,C,D;
        cin >> M >> S >> C >> D;

        for (ll i = 0; i < 11; i++){
            if (C == now[i]){
                now[i] = D;
                break;
            }
        }

        arr[tttt+1] = {now};
        times[tttt+1] = {M,S};
    }


    for (ll tttt = 0; tttt < q; tttt++){
        ll L,R;
        bool flag = true; 
        cin >> L >> R;
        for (ll i = 0; i < n+1; i++){
            if (times[i].first > L){
                for (ll j = 0; j < 11; j++){
                    if (j != 10){
                        cout << arr[i-1][j] << " ";
                    } else {
                        cout << arr[i-1][j] << "\n";
                    }
                }
                flag = false;
                break;
            } else if (times[i].first == L && times[i].second > R){
               for (ll j = 0; j < 11; j++){
                    if (j != 10){
                        cout << arr[i-1][j] << " ";
                    } else {
                        cout << arr[i-1][j] << "\n";
                    }
                }
                flag = false;
                break; 
            }
        }
        if (flag){
            for (ll j = 0; j < 11; j++){
                if (j != 10){
                    cout << arr[n][j] << " ";
                } else {
                    cout << arr[n][j] << "\n";
                }
            }
        }
    }
}