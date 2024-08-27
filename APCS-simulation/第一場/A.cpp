#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    ll n,p,m,k,d;
    cin >> n >> p >> m >> k >> d;

    ll now_sit = 0;
    ll now_up = 0;
    if (n > p){
        now_sit = p;
        now_up = 0;
    } else {
        now_sit = n;
        now_up = p-n;
    }

    now_sit -= m;
    now_up -= k;

    if (n > now_sit+now_up){
        now_sit = now_sit+now_up;
        now_up = 0;
    } else {
        now_sit = n;
        now_up = now_sit+now_up-n;
    }
    

    if (now_sit+d <= n){
        cout << "Happy :>\n";
        cout << n-(now_sit+d);
    } else {
        cout << "Sad :((\n";
        cout << abs(n-(now_sit+d))-1;
    }
}