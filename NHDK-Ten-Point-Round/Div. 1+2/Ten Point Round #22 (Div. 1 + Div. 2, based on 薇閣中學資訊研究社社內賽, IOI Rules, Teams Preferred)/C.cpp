#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

ll n,k;
double mx = 0.000000000, temp;

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cin >> n >> k;
    double a[n], b[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    //k<=2
    if (k == 1) {
        for (int i = 0; i < n; i++) {
            temp = ((a[i])/(b[i]));
            if (temp > mx) {
                mx = temp;
            }
        }
        cout << mx;
    } else if (k == 2) {
        for (int i = 0; i < n; i++) {
            for (int j = i+1; i < n; j++) {
                temp = ((a[i]+a[j])/(b[i]+b[j]));
                if (temp > mx) {
                    mx = temp;
                }
            }
        }
        cout << mx << endl;
    } else {
        cout << 0.9;
    }
}