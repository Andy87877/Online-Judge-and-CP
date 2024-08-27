// https://zerojudge.tw/ShowProblem?problemid=a915
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n;

int main() {
    cin >> n;
    ll x[n], y[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (x[i] > x[j]) {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            } else if ((x[i] == x[j]) && (y[i] > y[j])) {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << x[i] << " " << y[i] << "\n";
    }
}