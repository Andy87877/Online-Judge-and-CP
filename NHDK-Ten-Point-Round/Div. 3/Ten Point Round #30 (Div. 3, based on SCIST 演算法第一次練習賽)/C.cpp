#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,m;
    cin >> n >> m;
    ll a[n], p[n], temp[n], fir[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        fir[i] = a[i];
    }

    for (ll t = 0; t < m; t++) {
        for (ll i = 0; i < n; i++) {
            cin >> p[i];
        }
        for(ll i = 0; i < n; i++) {
        	//cout << fir[i] << "->" << p[a[i]-1] << "\n";
            temp[i] = p[a[i]-1];
        }
        for (ll i = 0; i < n; i++) {
        	a[i] = temp[i];
        }
    }

    ll ans = 0;
    for (ll i = 0; i < n; i++) {
    	//cout << fir[i] << " " << a[i] << "\n";
        if (fir[i] == a[i]) {
            ans++;
        }
    }
    cout << ans << "\n";
}