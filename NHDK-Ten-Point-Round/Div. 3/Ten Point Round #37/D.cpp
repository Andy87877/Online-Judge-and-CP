#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    string arr[3] = {"QWERTYUIOP","ASDFGHJKL","ZXCVBNM"};
    ll now_arr_i = 0, now_arr_j = 0;
    string ans = "";

    ll times;
    cin >> times;

    char now;
    cin >> now;
    for (ll i = 0; i < 3; i++) {
        for (ll j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] == now) {
                now_arr_i = i;
                now_arr_j = j;
                break;
            }
        }
    }

    for (ll tttttt = 0; tttttt < times; tttttt++) {
        ll x, y;
        cin >> x;
        if (x == 2) {
            ans += now;
        } else if (x == 1) {
            cin >> y;
            if (y == 1) {// l
                if (now_arr_j != 0) { 
                    now_arr_j--;
                }
            } else if (y == 2) {//l up
                if (now_arr_i != 0) {
                    now_arr_i--;
                }
            } else if (y == 3) {// r up
                if (now_arr_i != 0) {
                    now_arr_i--;
                    now_arr_j++;
                }
            } else if (y == 4) { // r
                if (now_arr_j != arr[now_arr_i].size()-1) {
                    now_arr_j++;
                }
            } else if (y == 5) {// l down
                if (now_arr_i != 2 && now_arr_j != 0) {
                    now_arr_i++;
                    now_arr_j--;
                }
            } else if (y == 6){ // r down
                if (now_arr_i != 2) {
                    if (now != 'K' && now != 'L' && now != 'P') {
                        now_arr_i++;
                    }
                }
            }
        }

        now = arr[now_arr_i][now_arr_j];
    }
    cout << ans << "\n";
}