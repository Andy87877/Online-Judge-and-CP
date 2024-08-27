#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,x;
    cin >> x >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a = 0, b = 0, mi = arr[0], mx = arr[0];
    for (int i = 0; i < n; i++) {
        if (mi > arr[i]) mi = arr[i];
        if (mx < arr[i]) mx = arr[i];
        if (arr[i] > x) {
            a++; 
        } else {
            b++;
        }
    }
    if (a > b) {
        cout << a << " " << mx;
    } else {
        cout << b << " " << mi;
    }
}