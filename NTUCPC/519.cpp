#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll a,b,c;
    cin >> a >> b >> c;
    string str = "XXX";
    if (a == 60) str[0] = 'O';
    if (b == 60) str[1] = 'O';
    if (c == 60) str[2] = 'O';
    cout << str << "\n";
}