#include <bits/stdc++.h>
#define ll long long
#define Andy8787_want_AC ios::sync_with_stdio(0),cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Andy8787_want_AC
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            for (int k = 0; k <= 3; k++) {
                for (int l = 0; l <= 3; l++) {
                    if (i != j && i != k && i != l && j != k && j != l && k != l) {
                        cout << i << " " << j << " " << k << " " << l << endl;
                    }
                }
            }
        }
    }
}