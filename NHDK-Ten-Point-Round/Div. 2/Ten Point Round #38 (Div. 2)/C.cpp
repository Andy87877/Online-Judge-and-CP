#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;
    ll a[n], b[n], c[n], score[n];

    for (ll i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i]; 
        score[i] = b[i]*(a[i]+c[i]);
        
    }


}