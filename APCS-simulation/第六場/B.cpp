#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC

    ll n,m;
    cin >> n >> m;

    ll t, k ,R;
    cin >> t >> k >> R;

    string s;
    cin >> s;

    ll H[n][m];
    ll a[n][m], b[n][m]; //吸收的度
    ll A[n][m], B[n][m]; //熟度
    bool Bool_check[n][m]; //是否熟了
    memset(a, 0, sizeof(a)); memset(b, 0, sizeof(b));
    memset(A, 0, sizeof(A)); memset(B, 0, sizeof(B));
    memset(Bool_check, false, sizeof(Bool_check));

    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> H[i][j];
        }
    }
    


    ll y[n][m];
    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            cin >> y[i][j];
        }
    }


    // cout << "\n\n\n";
    ll ans_A = 0, ans_B = 0; //都熟? 燒焦幾個
    ll chch = 0;//正反
    ll check_time = 0;
    for (ll tttt = 0; tttt < t; tttt++){
        if (s[tttt] == 'S') chch++;
        if (chch%2 == 0){ // a
            for (ll i = 0; i < n; i++){
                for (ll j = 0; j < m; j++){
                    
                    if (!Bool_check[i][j]){
                        a[i][j] += H[i][j];
                        while (a[i][j] >= k){
                            a[i][j] -= k;
                            A[i][j]++;
                        }
                    }
                    
                    H[i][j] += y[i][j];
                    if (H[i][j] < 0) H[i][j] = 0;
                }
                
            }
        } else {
            for (ll i = 0; i < n; i++){
                for (ll j = 0; j < m; j++){
                    
                    if (!Bool_check[i][j]){
                        b[i][j] += H[i][j];
                        while (b[i][j] >= k){
                            b[i][j] -= k;
                            B[i][j]++;
                        }
                    }
                    H[i][j] += y[i][j];
                    if (H[i][j] < 0) H[i][j] = 0;
                }
                
            }
        }
        
        // check
        for (ll i = 0; i < n; i++){
            for (ll j = 0; j < m; j++){
                // cout << A[i][j] << " ";
                if (A[i][j] >= R && B[i][j] >= R && !Bool_check[i][j]){
                    Bool_check[i][j] = true;
                    check_time++;
                }
            }
            // cout << "\n";
        }
        // cout << "\n";

        if (check_time == n*m){
            ans_A = 1;
            break;
        }
    }


    for (ll i = 0; i < n; i++){
        for (ll j = 0; j < m; j++){
            if (A[i][j] > R*2) ans_B++;
            if (B[i][j] > R*2) ans_B++;
        }
    }

    cout << ans_A << " " << ans_B;
}