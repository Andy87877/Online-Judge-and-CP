#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m,R;
    cin >> n >> m >> R;
    
    ll C[n+2][m+2]; // 味道
    ll arr[n+2][m+2]; // 風味

    memset(C, -1, sizeof(C));
    memset(arr, -1, sizeof(arr));
    
    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= m; j++){
            cin >> C[i][j];
        }
    }

    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= m; j++){
            // 這一格
            
            ll k = 0; //算不同

            //算周圍 K 
            for (ll a = -1; a <= 1; a++){
                for (ll b = -1; b <= 1; b++){
                    if (C[i-a][j-b] != -1) {
                        if (a == 0 && b == 0){
                        } else {
                            for (ll c = -1; c <= 1; c++){
                                for (ll d = -1; d <= 1; d++){
                                    if (C[i-c][j-d] == -1){ 
                                    } else {
                                        if (c == 0 && d == 0){
                                        } else {
                                            if (a == c && b == d){
                                            } else {
                                                if (((C[i-a][j-b]+C[i-c][j-d])%R) == C[i][j]) k++;      
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }


            arr[i][j] = k/2; //風味值
            // cout << i << " "<< j << " " << k << "\n";
        }
    }

    ll ans = 0;

    for (ll i = 1; i <= n; i++){
        for (ll j = 1; j <= m; j++){

            ll check = arr[i][j];
            // 周圍
            for (ll a = -1; a <= 1; a++){
                for (ll b = -1; b <= 1; b++){
                    if (a == 0 & b == 0){
                    } else {
                        if (arr[i-a][j-b] == check) ans++;
                    }
                }
            }

        }
    }

    cout << ans/2 << "\n";

}