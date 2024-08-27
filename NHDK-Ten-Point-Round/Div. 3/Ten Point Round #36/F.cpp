#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

bool cmp(pair<ll,ll> a, pair<ll,ll> b) {
    if (a.first > b.first) {
        return true;
    } 
    if (a.first == b.first) {
        if (a.second > b.second) {
            return true;
        }
    }
    return false;
}


int main() {
    Andy8787_want_AC
    ll n;
    cin >> n;

    ll a[n], arr_sort[n], index[n];
    vector<pair<ll,ll>> vec_arr;
    pair<ll,ll> p;
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        p.first = a[i];
        p.second = i+1;
        vec_arr.push_back(p);
    }
    
    sort(vec_arr.begin(), vec_arr.end(), cmp);
    // for (ll i = 0; i < n; i++) {
    //     cout << vec_arr[i].first << " ";
    // }
    // cout << "\n";
    // for (ll i = 0; i < n; i++) {
    //     cout << vec_arr[i].second << " ";
    // }

    // %
    ll a_fish = vec_arr[0].second, b_fish = vec_arr[1].second, big_fish = -1; // %
    for (ll i = 0; i < n; i++) {
        if (big_fish > vec_arr[i].first) {
            break;
        }
        for (ll j = 0; j < n; j++) {
            if ((vec_arr[j].first % vec_arr[i].first) > big_fish) {
                big_fish = (vec_arr[j].first % vec_arr[i].first);
                a_fish = vec_arr[j].second;
                b_fish = vec_arr[i].second;
            }
        }
    }
  
    
    ll q;
    cin >> q;
    for (ll i = 0; i < q; i++) {
        char x,y;
        ll a,b,c;
        cin >> x >> y;

        // x
        if (x == '%') {
            a = a_fish;
            b = b_fish;
        } else {
            a = vec_arr[0].second;
        }


        if (x == '+' || x == '*') {
            b = vec_arr[0].second;
        } else if (x == '-' || x == '/') {
            b = vec_arr[n-1].second;
        }

        if (y == '+' || y == '*') {
            c = vec_arr[0].second;
        } else {
            c = vec_arr[n-1].second;
        }

        cout << a << " " << b << " " << c <<"\n";
    }
    
}