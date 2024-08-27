// https://zerojudge.tw/ShowProblem?problemid=c022
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int total = 0;
        int a, b;
        cin >> a >> b;
        for (int i = a; i <= b; i++) {
            if (i % 2 == 1) {
                total += i;
            }
        }
        cout << "Case " << t+1 << ": " << total << endl;
    }
}
