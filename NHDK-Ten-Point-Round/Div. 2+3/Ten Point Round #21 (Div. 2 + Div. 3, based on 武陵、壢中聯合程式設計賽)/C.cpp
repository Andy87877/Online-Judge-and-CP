#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <iomanip>
#define ll long long
using namespace std;

int main() {
    ll T, N, total = 0, temp;
    cin >> T >> N;
    ll x[N];
    double ans[N];
    for (int i = 0; i < N; i++) {
        cin >> temp;
        total += temp;
        x[i] = temp;
    }

    for (int i = 0; i < N; i++) {
        ans[i] = T*1.0/total*x[i];
        cout << setprecision(1) << fixed << ans[i] << " ";
    }
}