// https://hackmd.io/@sa072686/cp/%2FaCmrox62TyKBuGzqdZ0e6g#%E5%B0%8D%E7%A8%B1
#include <bits/stdc++.h>
using namespace std;

string solve() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n/2; i++) {
        if (abs(arr[i]-arr[n-i-1]) > k) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    cout << solve() << "\n";
}