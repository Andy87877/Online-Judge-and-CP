// https://zerojudge.tw/ShowProblem?problemid=k680
#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;

    while (t--){
        string s;
        char check;

        cin >> check;
        cin >> s;

        ll a = 0, b = 0, tmp = 0;

        for (tmp = 0; tmp < s.size(); tmp++){
            if (s[tmp] == check) break;
            a *= 10;
            a += (int(s[tmp]) - int('0'));
        }
        tmp++;
        for (; tmp < s.size(); tmp++){
            b *= 10;
            b += (int(s[tmp]) - int('0'));
        }

        if (check == '+'){
            cout << a+b << "\n";
        } else {
            cout << a-b << "\n";
        }
    }
}