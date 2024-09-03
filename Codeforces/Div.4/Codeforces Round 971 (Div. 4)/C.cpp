#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll judge(){
    ll x,y, k, ans;
    cin >> x >> y >> k;

    ll x_times = x/k + (x%k != 0), y_times = y/k + (y%k != 0);
    if (x_times <= y_times) {
        ans = y_times*2;
    } else {
        ans = x_times*2-1;
    }

    return ans;
}

int main() {
    Andy8787_want_AC
    ll t;
    cin >> t;
    while (t--){
        cout << judge() << "\n";
    }
}