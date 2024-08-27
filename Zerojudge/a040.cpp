#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
    ll n,m;
    bool flag = true;
    cin >> n >> m;
    for (ll num = n; num <= m; num++) {
        ll temp, total = 0;
        string s = to_string(num);
        for (char i: s) {
            temp = round(pow((int(i)-48), s.length()));
            total += temp;
        }
        if (total == num){
            flag = false;
            cout << num << " ";
        }
    }
    if (flag){
        cout << "none\n";
    }
}