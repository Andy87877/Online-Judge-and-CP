#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

ll n,m;
ll w[8], total = 0;
ll a,b = 1, temp;

int main() {
    Andy8787_want_AC
    cin >> n >> m;
    for (int i = 0; i < 7; i++) {
        cin >> w[i];
        total += w[i];
    }

    if (total == 0) {
        cout << -1 << "\n";
        return 0;
    }

    a = n/total;
    temp = n-a*total;

    if (temp == 0) {
        a--;
        b = 1;
    } else {
        for (int i = 6; i >= 0; i--) {
            temp -= w[i];
            // cout << temp << " " << i << "\n";
            if (temp <= 0) {
                b = i+1;
                break;
            }
        }
    }
    a = m-a;

    if (a <= 0) {
        cout << "-1\n";
    } else {
        cout << a << " " << b << "\n";
    }
}