#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll judge(){
    ll a,b, mid, ans;
    cin >> a >> b;

    mid = (a+b)/2;
    ans = abs(a-mid)+abs(b-mid);
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