#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
    if (a[2]*a[2] < a[1]*a[1]+a[0]*a[0]) {
        cout << "acute triangle";
    } else if (a[2]*a[2] == a[1]*a[1]+a[0]*a[0]) {
        cout << "right triangle";
    } else {
        cout << "obtuse triangle";
    }
}