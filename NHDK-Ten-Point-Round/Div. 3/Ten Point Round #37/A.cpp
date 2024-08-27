#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    string str;
    cin >> str;

    int change[6];
    memset(change, 0, sizeof(change));
    char change_eng[6] = {'B','E','I','O','S','Z'};
    char change_num[6] = {'8','3','1','0','5','2'};

    string ans = "";
    for (ll i = 0; i < n; i++) {

        bool ha = true;

        for (ll j = 0; j < 6; j++) {
            if (str[i] == change_eng[j]){
                if (change[j] == 2) {
                    cout << "NO\n";
                    return 0;
                }else if (change[j] == 1) {
                    ans += change_num[j];
                }else if (change[j] == 0) {
                    ans += str[i];
                }
                change[j]++;
                ha = false;
                break;
            }
        }
        if (ha) {
            ans += str[i];
        }
    }

    bool check[1000];
    memset(check, 0, sizeof(check));
    for (ll i = 0; i < n; i++) {
        if (check[int(ans[i])]){
            cout << "NO\n";
            return 0;
        } else {
            check[int(ans[i])] = 1;
        }
    }

    cout << "YES\n";
    cout << ans << "\n";
}