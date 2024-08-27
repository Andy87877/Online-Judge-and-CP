#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m,k,w,Q;
    cin >> n >> m >> k >> w >> Q;

    ll change[n][m];
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> change[i][j];
        }
    }

    ll fish[n][k];
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < k; j++) {
            cin >> fish[i][j];
        }
    }

    // cout << "TRYYY:\n";
    // for (ll i = 0; i < n; i++){
    //     for (ll j = 0; j < k; j++) {
    //         cout << fish[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    for (ll q = 0; q < Q; q++) {
        ll a,a_fish,b,b_fish;
        cin >> a >> a_fish >> b >> b_fish;

        
        //test
        // cout << q << " Frist\n";
        // for (ll i = 0; i < n; i++) {
        //     for (ll j = 0; j < k; j++) {
        //         cout << fish[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        

        bool CHANGE = false;
        for (ll i = 0; i < m; i++) {
            if (change[a-1][i] == b) {
                CHANGE = true;

                //找魚位置
                ll index_a, index_b;
                for (ll j = 0; j < n; j++) {
                    if (fish[a-1][j] == a_fish){
                        index_a = j;
                        break;
                    }
                }
                for (ll j = 0; j < n; j++) {
                    if (fish[b-1][j] == b_fish){
                        index_b = j;
                        break;
                    }
                }
                swap(fish[a-1][index_a],fish[b-1][index_b]);
                break;
            }
        }
        if (CHANGE) {
            cout << "YES ";
        } else {
            cout << "NO ";
        }




        ll saddddddd = 0, saddd_tmp = 0;
        // cout << "Second\n";
        for (ll i = 0; i < n; i++) {
            saddd_tmp = 0;
            for (ll j = 0; j < k; j++) {
                saddd_tmp += fish[i][j];
                // cout << fish[i][j] << " ";
            }
            // cout << "\n";

            if (saddd_tmp > w) saddddddd += k;
        }

        cout << saddddddd << "\n";
    }
}
