#include <iostream>
#define int long long
using namespace std;

signed main() {
    int t, total = 0;
    double X, Y, r, dist, x, y;
    cin >> t;
    cin >> X >> Y;
    cin >> r;
    r *= r;
    
    for (int i = 0; i < t; i++) {
        cin >> x >> y;
        dist = (X-x)*(X-x) + (Y-y)*(Y-y);
        if (dist <= r) {
            total += 2;
        }
    }
    cout << total << endl;
}
