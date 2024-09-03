#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

void judge(){
    ll n;
    cin >> n;

    string str[n];
    for (ll i = 0; i < n; i++){
        cin >> str[i];
    }

    for (ll i = n-1; i >= 0; i--){
        string tmp = str[i];
        for (ll j = 0; j < tmp.size(); j++){
            if (tmp[j] == '#'){
                cout << j+1 << " ";
            }
        }
    }
    cout << "\n";
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--){
        judge();
    }
}