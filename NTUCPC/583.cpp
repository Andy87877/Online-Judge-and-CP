#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void judge(){
    ll n,m;
    cin >> n >> m;

    string arr[n];
    for (ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool change = true;
    while (change){
        change = false;
        for (ll i = n-2; i >= 0; i--){ //下往上
            for (ll j = 0; j < m; j++){
                if (arr[i][j] == '*'){
                    if (arr[i+1][j] == '.'){
                        arr[i+1][j]  = '*';
                        arr[i][j] = '.'; 
                        change = true;
                    }
                }
            }
        }
    }

    for (ll i = 0; i < n; i++){
        cout << arr[i] << "\n";
    }
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--){
        judge();
    }
}