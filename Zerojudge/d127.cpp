// https://zerojudge.tw/ShowProblem?problemid=d127
#include <iostream>
using namespace std;

int main() {
    long long L;
    while (cin >> L) {
        L /= 2;
        cout << (L/2)*(L-(L/2)) << endl;
    }
}
