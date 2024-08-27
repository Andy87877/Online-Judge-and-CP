#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;

int main() {
    ll n;
    cin >> n;
    ll t[n], a[n];
    for (int i = 0; i < n; i++) {
        cin >> t[i] >> a[i]; 
    }
    
    ll temp;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                temp = t[j];
                t[j] = t[i];
                t[i] = temp;
            } else if ((t[j] <= t[i]) && (a[i] == a[j])) {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
                temp = t[j];
                t[j] = t[i];
                t[i] = temp;
            }
        }
    }

    ll ans = 0;
    temp = 0;
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (temp < t[i]) {
            temp++;
            ans += a[i];
        }
        cout << t[i] << " " << a[i] << endl;
    }
    cout << ans << endl;
}