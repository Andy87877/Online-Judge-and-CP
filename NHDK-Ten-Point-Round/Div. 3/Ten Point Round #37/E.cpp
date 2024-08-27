#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    char arr[n][n];

    for (ll i = 0; i < n; i++){
        string ha;
        cin >> ha;
        for (ll j = 0; j < n; j++) {
            arr[i][j] = ha[j];
        }
    }

    ll k;
    cin >> k;
    string s, ans = "";
    cin >> s;

    ll now_i, now_j;
    

    for (ll times = 0; times < k; times++) {
        if (s[times] == '0') { // 往右下
            if (times >= n) {
                now_i = times-n+1;
                now_j = 0;
                for (ll i = now_i; i < n; i++) {
                    ans += arr[now_i][now_j];
                    now_i++;
                    now_j++;
                }
            } else {
                now_i = 0;
                now_j = n-times-1;
                for (ll j = now_j; j < n; j++) {
                    ans += arr[now_i][now_j];
                    now_i++;
                    now_j++;
                }
            }
            
        } else {//往左上
            if (times >= n) {
                now_i = n-1;
                now_j = n*2-times-2;
                for (ll j = now_j; j >= 0; j--) {
                    ans += arr[now_i][now_j];
                    now_i--;
                    now_j--;
                }
            } else {
                now_i = times;
                now_j = n-1;
                for (ll i = now_i; i >= 0; i--) {
                    ans += arr[now_i][now_j];
                    now_i--;
                    now_j--;
                }
            }

            
        }
        // cout << ans << "\n";
    }
    cout << ans << "\n";
}