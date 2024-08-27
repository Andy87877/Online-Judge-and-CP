// https://zerojudge.tw/ShowProblem?problemid=a244
#include <iostream>
#define int long long
using namespace std;

signed main() {
    int a, b, c, t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> a >> b >> c;
        if (a == 1) {
            cout << b+c;
        } else if (a == 2) {
            cout << b-c;
        } else if (a == 3) {
            cout << b*c;
        } else {
            cout << b/c;
        }
        cout << endl;
    }
}
