// 我不要動腦了:))))

#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;

    ll a,b,c;
    ll mx = -1;

    for (ll i = 0; i < m; i++){
        cin >> a >> b >> c;
        mx = max(mx,c);
    }
    ll k;
    cin >> k;
    
    cout << mx;
}