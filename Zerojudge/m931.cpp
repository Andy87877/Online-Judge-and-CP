#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], d[n], total[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> d[i];
        total[i] = a[i]*a[i] + d[i]*d[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (total[i] > total[j]) {
                swap(total[i], total[j]);
                swap(a[i], a[j]);
                swap(d[i], d[j]);
            };
        }
    }

    cout << a[1] << " " << d[1];
}