// https://hackmd.io/YTiYMA8zT9uCObxzri_11Q#%E5%84%B2%E5%AD%98%E8%A4%87%E6%95%B8%E8%B3%87%E6%96%99
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << arr[i] << "\n";
    }
}