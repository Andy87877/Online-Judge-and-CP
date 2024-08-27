#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,k;
    cin >> n >> k;

    string s;
    ll ans = 0, need_num = 0;

    for (ll i = 0; i < n; i++) {
        cin >> s;
        ll tmp = 0;
        for (ll j = 1; j < s.size(); j++) {
            tmp *= 10;
            tmp += int(s[j])-int('0');
        }

        if (need_num == k) break;
        // need
        bool flag = false;
        if (tmp >= 65) flag = true;
        if (tmp <= 12) flag = true;
        if (s[0] == 'F'){
            if (tmp >= 35 && tmp <= 45) flag = true;
        }

        if (flag){
            ans += (i - need_num); 
            need_num++;
        }
    }

    cout << ans << endl;
}