#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,i, ans = 0,temp1, temp2,temp3,temp4, A,B,C;

ll judge() {
    cin >> n;
    ll a[n], test[n] = {};
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    // if (n <= 3) {
    //     return 0;
    // } 
    
    if (n == 4) {
        if (a[0]+a[0+1]+a[0+2]+a[0+3] > 0) {
            return a[0]+a[0+1]+a[0+2]+a[0+3];
        } else {
            return 0;
        }
    }

    ans = 0;
    // ABC
    for (i = 0; i < n-5; i++) {
        A = a[i]+a[i+1]+a[i+2]+a[i+3];
        B = a[i+1]+a[i+2]+a[i+3]+a[i+4];
        C = a[i+2]+a[i+3]+a[i+4]+a[i+5];
        cout << A << " " << B << " " << C << "\n";
        if(A > B) {//AB
            if (A > 0) {
                ans += A;
                i++;
            }
        } else {//BA
            if (B > 0) {
                ans += B;
                i+=2;
            }
        }

        if ((A > 0) || (B > 0)) {
            if (i == temp1) {
                ans -= (a[i]+a[i+1]+a[i+2]+a[i+3]);
            } else if (i == temp2) {
                ans -= (a[i+1]+a[i+2]+a[i+3]);
            } else if (i == temp3) {
                ans -= (a[i+2]+a[i+3]);
            } else if (i == temp4) {
                ans -= (a[i+3]);
            }
            // cout << ans << " " << temp1 << " " << i << "\n";
        }
        temp1 = i;
        temp2 = i+1;
        temp3 = i+2;
        temp4 = i+3;
        
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(0),cin.tie(0);
    cout << judge() << "\n";
}
/*
10
1 2 3 4 5 6 7 8 9 10

10
-1 -2 -3 -4 -5 -6 -7 -8 -9 -10

10
1 -2 3 -4 5 -6 7 -8 9 -10
*/