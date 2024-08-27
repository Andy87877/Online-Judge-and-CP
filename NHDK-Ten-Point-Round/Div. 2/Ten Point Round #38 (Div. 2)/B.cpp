#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string test_string;
    ll now = 0;

    ll n;
    cin >> n;
    
    string arr[n];
    for(ll i = 0; i < n; i++){
        cin >> arr[i];
    }

    char check_arr[7][7]; //標記
    memset(check_arr, '0', sizeof(check_arr));

    for (ll i = 0; i < 7; i++){
        for (ll j = 0; j < 7; j++){
            if (((i == 0 || j == 0) || i == 6) || j == 6){
                check_arr[i][j] = '1';
            }
            if ((i == 2 || i == 3) || i == 4){
                if ((j == 2 || j == 3) || j == 4){
                    check_arr[i][j] = '1';
                }
            }
        }
    }

    ll ans = 0;
    char get_arr[8][8];
    bool flag = true;

    // 左上
    flag = true;
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            get_arr[i][j] = arr[i][j];
             // cout << get_arr[i][j];
        }
         // cout << endl;
    }

    test_string = "1111111010000010101110101011101010111010100000101111111000000000";

    now = 0;
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            if (get_arr[i][j] != test_string[now]) flag = false;
            now++;
        }
    }

    if (flag) ans++;
    // cout << ans << endl;

    // 右下
    flag = true;
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            get_arr[i][j] = arr[i+n-8][j+n-8];
            // cout << get_arr[i][j];
        }
        // cout << endl;
    }

    test_string = "0000000001111111010000010101110101011101010111010100000101111111";

    now = 0;
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            if (get_arr[i][j] != test_string[now]) flag = false;
            now++;
        }
    }

    if (flag) ans++;
    // cout << ans << endl;

    // 右上
    flag = true;
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            get_arr[i][j] = arr[i][j+n-8];
            // cout << get_arr[i][j];
        }
        // cout << endl;
    }

    test_string = "0111111101000001010111010101110101011101010000010111111100000000";

    now = 0;
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            if (get_arr[i][j] != test_string[now]) flag = false;
            now++;
        }
    }

    if (flag) ans++;
    // cout << ans << endl;

    // 左下
    flag = true;
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            get_arr[i][j] = arr[i+n-8][j];
            // cout << get_arr[i][j];
        }
        // cout << endl;
    }

    test_string = "0000000011111110100000101011101010111010101110101000001011111110";

    now = 0;
    for (ll i = 0; i < 8; i++){
        for (ll j = 0; j < 8; j++){
            if (get_arr[i][j] != test_string[now]) flag = false;
            now++;
        }
    }

    if (flag) ans++;
    // cout << ans << endl;

    if (ans == 3) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}