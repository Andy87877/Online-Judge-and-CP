#include <bits/stdc++.h>
#define db double
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    for (ll c = 3; c < 10000000000; c++){
        for (ll b = 2; b < c; b++){
            for (ll a = 1; a < b; a++){
                if(db(a)/db(b+c) + db(b)/db(a+c) + db(c)/db(a+b) == 4){
                    cout << a << " " << b << " " << c << "\n";
                    return 0;
                }
            }
        }
    }
}