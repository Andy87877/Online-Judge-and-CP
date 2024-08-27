#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC

    ll n,m, ans = 0;
    cin >> n >> m;


    string str;
    cin >> str;

    ll a[3], b[3]; //W M L
    for (ll i = 0; i < 3; i++){
        cin >> a[i];
    }
    for (ll i = 0; i < 3; i++){
        cin >> b[i];
    }

    ll total[n], no[n];
    memset(total, 0, sizeof(total));
    memset(no, 0, sizeof(no));
    total[0] = 0;
    no[0] = 0;

    for (ll i = 0; i < n; i++){
        if (i != 0){
            total[i] = total[i-1];
            no[i] += no[i-1];
        }

        if (str[i] == 'W') {
            total[i] += a[0];
            if (i + b[0] < n) no[i+b[0]] += a[0];
        } else if (str[i] == 'M'){
            total[i] += a[1];
            if (i + b[1] < n) no[i+b[1]] += a[1];
        } else {
            total[i] += a[2];
            if (i + b[2] < n) no[i+b[2]] += a[2];
        }
        // cout << total[i] << " " << no[i] << "\n";
        if (total[i]-no[i] > m) ans++;
    }
    cout << ans << endl;
}