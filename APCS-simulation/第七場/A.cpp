#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    char m[n];
    ll a[n], b[n];

    
    for (ll i = 0; i < n; i++){
        cin >> m[i] >> a[i] >> b[i];
    }

    ll k;
    cin >> k;
    string s;
    cin >> s;

    for (ll i = 0; i < k-1; i++){
        ll A, B;
        for (ll j = 0; j < n; j++){
            if (m[j] == s[i+1]){
                A = a[j];
                break;
            }
        }
        for (ll j = 0; j < n; j++){
            if (m[j] == s[i]){
                B = b[j];
                break;
            }
        }

        if (A == B) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }
}