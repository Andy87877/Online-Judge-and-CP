#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    char ans[5] = {'U','G','Y','T','I'};
    ll n;
    while(cin >> n) {
        cout << ans[n%5] << "\n";
    }
}