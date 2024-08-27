#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m, g, temp;
    cin >> n >> m >> g;
    ll a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
 
    ll ans = -1;
    bool flag;
    while (true) {
        ans++;
        flag = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < g) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << ans;
            return 0;
        }
        for (int i = 0; i < n; i++){
            for (int j = i+1; j < n; j++){
                if (a[j] < a[i]) {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                    temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                }else if ((a[j] == a[i]) && (b[j] < b[i])) {
                    temp = a[j];
                    a[j] = a[i];
                    a[i] = temp;
                    temp = b[j];
                    b[j] = b[i];
                    b[i] = temp;
                }
            }
        }
        for (int i = 0; i < m; i++) {
            a[i] += b[i];
        }
    }
}   