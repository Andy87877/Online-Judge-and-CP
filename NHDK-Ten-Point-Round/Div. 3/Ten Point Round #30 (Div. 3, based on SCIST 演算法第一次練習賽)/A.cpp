#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m,x;
    cin >> n >> m >> x;
    cout << (n/x+(n%x!=0))*(m/x+(m%x!=0)) << "\n";
}