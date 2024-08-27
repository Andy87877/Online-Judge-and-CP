#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    Andy8787_want_AC
    ll n,x,y,z;
    cin >> n >> x >> y >> z;
    ll a[n], b[n] , all[n];
    map<ll,ll> ma;
    vector<ll> math;
    vector<ll> english;
    vector<ll> both;
 
    for (ll i = 0; i < n; i++) { //math
        cin >> a[i];
        math.push_back(a[i]);
    }
    sort(math.rbegin(),math.rend());
 
    ll temp = x;
    if (x != 0) {
        for (ll i = 0; i < n; i++) {
            if (temp == 0) {
                break;
            }
            if (math[x-1] < a[i]) {
                ma[i]++;
                temp--;
            } 
            // cout << a[i] << " ";
        }
        for (ll i = 0; i < n; i++) {
            if (temp == 0) {
                break;
            }
            if (math[x-1] == a[i]) {
                ma[i]++;
                temp--;
            } 
            // cout << a[i] << " ";
        }
    }
 
 
    for (ll i = 0; i < n; i++) {//english
        cin >> b[i];
        all[i] = a[i]+b[i];
        if (ma[i] == 0) {
            english.push_back(b[i]);
        }
    }
    if (english.size() != 0) {
        sort(english.rbegin(),english.rend());
    }
 
    temp = y;
    if (y != 0) {
        for (ll i = 0; i < n; i++) {
            if (ma[i] == 0) {
                if (temp == 0) {
                    break;
                }
                if (english[y-1] < b[i]) {
                    ma[i]++;
                    temp--;
                } 
            }
            // cout << a[i] << " ";
        }
        for (ll i = 0; i < n; i++) {
            if (ma[i] == 0) {
                if (temp == 0) {
                    break;
                }
                if (english[y-1] == b[i]) {
                    ma[i]++;
                    temp--;
                } 
            }
            // cout << a[i] << " ";
        }
    }
    
 
    for (ll i = 0; i < n; i++) {
        if (ma[i] == 0) {
            both.push_back(all[i]);
        }
    }
    if (both.size() != 0) {
        sort(both.rbegin(),both.rend());
    }
    temp = z;
    if (z != 0) {
        for (ll i = 0; i < n; i++) {
            if (ma[i] == 0) {
                if (temp == 0) {
                    break;
                }
                if (both[z-1] < all[i]) {
                    ma[i]++;
                    temp--;
                } 
            }
            // cout << a[i] << " ";
        }

        for (ll i = 0; i < n; i++) {
            if (ma[i] == 0) {
                if (temp == 0) {
                    break;
                }
                if (both[z-1] == all[i]) {
                    ma[i]++;
                    temp--;
                } 
                
            }
        }
    }
    
 
    for (auto i: ma) {
        if (i.second != 0) {
            cout << i.first+1 << "\n";
        }
    }
}