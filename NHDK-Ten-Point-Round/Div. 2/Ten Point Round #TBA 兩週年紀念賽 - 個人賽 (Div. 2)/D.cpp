#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    Andy8787_want_AC
    ll n,m,t;
    cin >> n >> m >> t;
    unordered_map<string, ll> ma;
 
    string str;
    
    ll num;
    for (ll i = 0; i < n; i++) {
        cin >> str >> num;
        ma[str] = num;
    }
 
    map<ll,ll> checknum;
    ll now = 1, nowteam = 1;
    for (ll i = 0; i < m; i++) {
        cin >> num;
        for (ll j = 0; j < num; j++) {
            checknum[now] = nowteam;
            // cout << now << " " << nowteam << "\n";
            now++;
        }
        nowteam++;
    }
 
    string q;
    for (ll i = 0; i < t; i++) {
        cin >> q;
        cout << checknum[ma[q]] << "\n";
    }
}