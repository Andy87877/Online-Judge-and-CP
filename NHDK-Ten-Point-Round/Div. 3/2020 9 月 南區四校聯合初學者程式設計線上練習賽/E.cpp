#include <iostream>
#define int long long
using namespace std;

signed main() {
    int n;
    cin >> n;
    int a[n+1], b[n+1], sum[n+1];
    b[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> b[i];
    }
    
    a[1] = b[1];
    a[2] = b[2];
    a[3] = b[3] - a[1];

    sum[3] = a[1];
    for (int i = 4; i <= n; i++) {
        sum[i] = sum[i-1] + a[i-2];
        a[i] = b[i] - sum[i];
    }

    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }

}
/*
b1 = a1
b2 = a2
b3 = a1+a3
b4 = a1+a2+a4
b5 = a1+a2+a3+a5
*/