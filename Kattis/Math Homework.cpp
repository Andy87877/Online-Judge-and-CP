// https://open.kattis.com/problems/mathhomework
#include <bits/stdc++.h>
using namespace std;

int main() {
    int b,c,d,l;
    bool flag = true;
    cin >> b >> c >> d >> l;
    for (int i = 0; i <= l/b; i++) {
        for (int j = 0; j <= l/c; j++) {
            for (int k = 0; k <= l/d; k++) {
                if (b*i+c*j+k*d == l) {
                    cout << i << " " << j << " " << k << "\n";
                    flag = false;
                } 
            }
        }
    }
    if (flag) {
        cout << "impossible\n";
    }
}