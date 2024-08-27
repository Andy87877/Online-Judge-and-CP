#include <bits/stdc++.h>
using namespace std;

int arr[2000000];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    while (cin >> n) {
        if (n == 0) break;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}