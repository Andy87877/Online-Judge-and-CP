// https://zerojudge.tw/ShowProblem?problemid=k678
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
        ll check;
        cin >> s;
        cin >> check;

        ll a = 0, b = 0, tmp = 0;

        for (tmp = 0; tmp < s.size(); tmp++){
            if (s[tmp] == '+') break;
            a *= 10;
            a += (int(s[tmp]) - int('0'));
        }
        tmp++;
        for (; tmp < s.size(); tmp++){
            b *= 10;
            b += (int(s[tmp]) - int('0'));
        }

        if (a+b == check){
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
}