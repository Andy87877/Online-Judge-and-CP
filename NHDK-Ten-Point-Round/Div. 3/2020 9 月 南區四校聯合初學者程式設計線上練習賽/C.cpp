#include <iostream>
#define int long long
using namespace std;

signed main() {
    int a,b,n,total = 0;
    cin >> a >> b;

    for (int i = 0; i < a; i++) {
        cin >> n;
        if (n >= b) {
            total++;
        }
    }
    cout << total << endl;
}