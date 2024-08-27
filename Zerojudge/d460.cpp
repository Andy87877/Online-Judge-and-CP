// https://zerojudge.tw/ShowProblem?problemid=d460
#include <iostream>
using namespace std;

int main() {
    long long a;
    cin >> a;
    if (a <= 5) {
        cout << 0;
    } else if (a <= 11) {
        cout << 590;
    } else if (a <= 17) {
        cout << 790;
    } else if (a <= 59) {
        cout << 890;
    } else {
        cout << 399;
    }
}
