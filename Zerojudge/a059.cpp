// https://zerojudge.tw/ShowProblem?problemid=a059
#include <iostream>
#define int long long
using namespace std;

signed main() {
    int times;
    cin >> times;
    for (int i = 1; i <= times; i++) {
        int a, b, total = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            for (int z = 1; z <= b; z++) {
                if (z*z == j) {
                    total += j;
                    break;
                }
            }
        }
        cout << "Case " << i << ": " << total << endl;
    }
}
