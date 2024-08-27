#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;


int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;

    ll hahaha = pow(2,n-2);
    ll S[4][hahaha];
    for (ll i = 0; i < 4; i++){
        for (ll j = 0; j < pow(2,n-2); j++){
            cin >> S[i][j];
        }
    }

    ll change_num[m];
    for (ll i = 0; i < m; i++){
        cin >> change_num[i];
    }

    for (ll i = 0; i < m; i++){
        ll hiiiiii = change_num[i];

        ll num = hiiiiii, checkI = 0, checkJ = 0;
        string str = "";
        ll to = 0, times = n;
        while (times != 0){
            times--;
            if (to+pow(2,times) <= num){
                to += pow(2,times);
                str += "1";
            } else {
                str += "0";
            }
        }

        // cout << str << "\n";
        if (str[0] == '1') checkI+=2;
        if (str[n-1] == '1') checkI+=1;

        times = n-2;
        to = 0;
        for (ll i = 1; i < n-1; i++){
            times--;
            if (str[i] == '1') to += pow(2,times);
        }
        checkJ = to;

        // cout << checkI << " " << checkJ << "\n";
        if (i != m-1){
            cout << S[checkI][checkJ] << " ";
        } else {
            cout << S[checkI][checkJ];
        }
    }
}